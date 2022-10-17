#include <iostream>
#include <string>
#include <vector>
#include <clocale>
using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	string movies[28] = { "Reservoir Dogs", "Groundhog Day", "Paddington 2", "Leon", "Logan", "The Terminator", "Titanic", "The Exorcist", "Black Panther", "Spider-Man", "Inception", "Fight Club","Forrest Gump", "The Good, The Bad And The Ugly", "Pulp Fiction", "Schindler's List", "Star Wars", "Interstellar", "The Green Mile", "Se7en", " Seven Samurai", " La La Land", "Guardians Of The Galaxy", "Spirited Away", " Ghostbusters", "Schindler's List", "The Big Lebowski", " The Lord Of The Rings" };

	string people[28] = { "Tom Hanks", "Leonardo DiCaprio", "Elton John", "Princess Diana ", "Boris Johnson ", "Stephen Hawking ", "Margaret Thatcher ", "Sir Charlie Chaplin ", "Winston Churchill ", "Elon Musk", "Ariana Grande", "Johnny Depp", "Michael Jackson", "Eminem", "Elvis Presley", "Steve Jobs", "Abraham Lincoln", "Lady Gaga", "Bill Gates", "Marilyn Monroe", "Kanye West", "Mark Zuckerberg", "Khabib Nurmagomedov", "Vladimir Lenin", "Roman Abramovich", "Alexander Ovechkin", "Joseph Stalin", "Alexei Navalny" };

	string songs[9] = { "'Kukla kolduna' by Korol i Shut", "'Like a Rolling Stone' by Bob Dylan", "'Vladimirskii Tsentral' by Mikhail Krug ", "'In My Life' by The Beatles", "'Bohemian Rhapsody' by Queen", "'Iskala' by Zemfira", "'Knockin' on Heaven's Door' by Bob Dylan ", "'Toxic' by Britney Spears", "'Shape of You' by Ed Sheeran" };

	string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // номер буквы в алфавите 

	string name;
	string lastname;
	int year;

	cout << "Hi, we have some entertaining content for you. Do you want to take the test? Then enter your name" << endl;
	cin >> name;
	cout << "Now enter your last name " << endl;
	cin >> lastname;
	cout << " And enter your birth" << endl;
	cin >> year;

	string n, ls;
	n.append(name, 0, 1);
	ls.append(lastname, 0, 1);

	n = movies[letters.find(n)];
	ls = people[letters.find(ls)];

	
	int sum = 0;
	while ( year > 0)
	{
		sum += year % 10;
		year /= 10;
	}
	while (sum > 9) 
		sum = sum % 10 + sum / 10;

	cout << " Ваш фильм - это <<" << n << ">>, звезда - " << ls << ". Песенка для вас: " << songs[sum - 1] << endl;
}
















