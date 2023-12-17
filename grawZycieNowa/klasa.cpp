#include "klasa.h"

Plansza::Plansza(int szerPlanszy, int wysPlanszy) : m_szerMapy(szerPlanszy), m_wysMapy(wysPlanszy) {
	tablicaBool.resize(szerPlanszy, std::vector<StanPola>(wysPlanszy, StanPola::Nieaktywne));
}
Plansza::~Plansza() {}

void Plansza::rozmiarPlanszy() {
	std::cout << "Wymiary Planszy\n Wysokosc: " << m_wysMapy << "  Szerokosc: " << m_szerMapy << std::endl;
}

int Plansza::aktywneSektory() {
	for (int i = 0; i < m_szerMapy; ++i) {
		for (int j = 0; j < m_wysMapy; ++j) {
			if (tablicaBool[i][j] == StanPola::Aktywne) {
				licznikAktywneSektory++;
			}
		}
	}
	return licznikAktywneSektory;
}

void Plansza::zmianaSektoruKlikniecie(int wys, int szer) {
	if (tablicaBool[wys][szer] == StanPola::Aktywne) {
		tablicaBool[wys][szer] = StanPola::Nieaktywne;
	}
	else
	{
		tablicaBool[wys][szer] = StanPola::Aktywne;
	}
}

void Plansza::nastepnePokolenie() {
	std::vector<std::vector<StanPola>> nowaPlansza = tablicaBool;

	for (int i = 0; i < m_szerMapy; ++i) {
		for (int j = 0; j < m_wysMapy; ++j) {
			int liczbaAktywnychSasiadow;

			if (tablicaBool[i][j] == StanPola::Aktywne) {
				nowaPlansza[i][j] = (liczbaAktywnychSasiadow == 3) ? StanPola::Aktywne : StanPola::Nieaktywne;
			}
			else {
				nowaPlansza[i][j] = (liczbaAktywnychSasiadow == 3 || liczbaAktywnychSasiadow == 5) ? StanPola::Aktywne : StanPola::Nieaktywne;
			}
		}
	}
}

int Plansza::getWysokosc() { return m_wysMapy; }

int Plansza::getSzerokosc() { return m_szerMapy; }

void Plansza::kontrolaCzasuGry(bool PrzyciskCzasu) {
	const std::chrono::seconds interwal(1);
	if (PrzyciskCzasu == true) {
		while (PrzyciskCzasu == false) {
			nastepnePokolenie();
			std::this_thread::sleep_for(interwal);
		}
	}
}

void Plansza::zmianaRozmiaruPlanszy(int nowaWys, int nowaSzer) {
	tablicaBool.resize(nowaSzer, std::vector<StanPola>(nowaWys, StanPola::Nieaktywne));
}

void Opcje::zmianaRozmiaru(int szer, int wys) {
	plansza->zmianaRozmiaruPlanszy(szer, wys);
}

void Opcje::zapis(char nazwaPliku, int ROZMIAR) {
	//zapis aktualnego stanu gry
}

void Opcje::wczytaj(const char* nazwaPliku) {
	//wczytanie zapisanego stanu gry
}

void OknoInformacyjne::wielkoscPopulacji() {
	std::cout << "Aktualna populacja: " << 100*(plansza->aktywneSektory());
}

void OknoInformacyjne::aktualnyRozmiarPlanszy() {
	std::cout << "Aktualny rozmiar planszy: " << plansza->getWysokosc() << " x " << plansza->getSzerokosc();
}

bool PrzyciskiRuchu::jedenRuch() {
	plansza->nastepnePokolenie();
}

bool PrzyciskiRuchu::start() {
	//aktywne jeœli dodamy automatyczne zmiany pokoleñ
}

bool PrzyciskiRuchu::stop() {
	//aktywne jeœli dodamy automatyczne zmiany pokoleñ
}

bool PrzyciskiRuchu::przyspiesz(int czas) {
	//czas podwójnie przyspieszony
}
