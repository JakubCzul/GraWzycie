#include <iostream>
#include <vector>
#include <thread>
enum class StanPola { Nieaktywne, Aktywne };
class Plansza 
{
private:
	int m_szerMapy;
	int m_wysMapy;
	std::vector<std::vector<StanPola>> tablicaBool;
	int aktywneSektory = 0;
public:
	Plansza(int szerMapy, int wysMapy) : m_szerMapy(szerMapy), m_wysMapy(wysMapy) {
		tablicaBool.resize(szerMapy, std::vector<StanPola>(wysMapy, StanPola::Nieaktywne));
	}
	~Plansza() {}
	void rozmiarPlanszy() {	
		std::cout << "Wymiary Planszy\n Wysokosc: " << m_wysMapy << "  Szerokosc: " << m_szerMapy << std::endl;
	}

	

	void zmianaSektoruKlikniecie(int wys,int szer) {
		if (tablicaBool[wys][szer] == StanPola::Aktywne) {
			tablicaBool[wys][szer] = StanPola::Nieaktywne;
		}
		else 
		{
			tablicaBool[wys][szer] = StanPola::Aktywne;
		}
	}
	void nastepnePokolenie() {
		std::vector<std::vector<StanPola>> nowaPlansza = tablicaBool;

		for (int i = 0; i < m_szerMapy; ++i) {
			for (int j = 0; j < m_wysMapy; ++j) {
				int liczbaAktywnychSasiadow;

				if (tablicaBool[i][j] == StanPola::Aktywne) {
					// Jeœli s¹ 3 aktywne pola wokó³, pozostaw pole aktywne, w przeciwnym razie dezaktywuj
					nowaPlansza[i][j] = (liczbaAktywnychSasiadow == 3) ? StanPola::Aktywne : StanPola::Nieaktywne;
				}
				else {
					// Jeœli s¹ 3 lub 5 aktywnych pól wokó³, aktywuj pole
					nowaPlansza[i][j] = (liczbaAktywnychSasiadow == 3 || liczbaAktywnychSasiadow == 5) ? StanPola::Aktywne : StanPola::Nieaktywne;
				}
			}
		}
	}

	void kontrolaCzasuGry(bool PrzyciskCzasu) {
		const std::chrono::seconds interwal(1);
		if (PrzyciskCzasu == true) {
			while (PrzyciskCzasu == false) {
				nastepnePokolenie();
				std::this_thread::sleep_for(interwal);
			}
		}
	}

};


class OknoInfo {};
class Opcje {};
class PrzyciskiRuchu {};
 