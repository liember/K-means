#include "k_means.h"

int main()
{

	rgb mas[8] = {
		//тест из массива
		{255, 140, 50},
		{100, 70, 1},
		{150, 20, 200},
		{251, 141, 51},
		{104, 69, 3},
		{153, 22, 210},
		{252, 138, 54},
		{101, 74, 4},
	};
	K_means image_1(8, mas, 3);
	//std::cout << image_1;    //вывод на консоль
	//image_1.clustering(std::cout);
	std::ofstream dout;
	dout.open("Result_1.txt");
	dout << image_1;
	image_1.clustering(dout);

	std::ofstream fout; //тест с случайными данными
	fout.open("Image.txt");
	form_an_image(fout); //формирование данных и загрузка в файл
	std::ifstream fin;
	fin.open("Image.txt");
	K_means image_2(KK, fin); //создание объекта
	std::ofstream out;
	out.open("Result_2.txt");
	//std::cout << image_2;    //вывод на консоль
	//image_2.clustering(std::cout);
	out << image_2;
	image_2.clustering(out);

	return 0;
}
