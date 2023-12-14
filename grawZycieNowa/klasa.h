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
	int licznikAktywneSektory = 0;
public:
	Plansza(int szerMapy, int wysMapy);
	~Plansza();
	void rozmiarPlanszy();
	int aktywneSektory();
	void zmianaSektoruKlikniecie(int wys, int szer);
	void nastepnePokolenie();
	void kontrolaCzasuGry(bool PrzyciskCzasu);
	void zmianaRozmiaruPlanszy(int nowaWys, int nowaSzer);

	int getWysokosc();
	int getSzerokosc();

	friend Opcje;
};


class OknoInformacyjne {
public:
	Plansza* plansza;
	void wielkoscPopulacji();
	void aktualnyRozmiarPlanszy();
};

class Opcje {
public:
	Plansza* plansza;
	void zmianaRozmiaru(int szer, int wys);
	void zapis(char nazwaPliku, int ROZMIAR);
	void wczytaj(const char* nazwaPliku);
};

class PrzyciskiRuchu {};
 