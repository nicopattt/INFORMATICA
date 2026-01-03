
#include <iostream>
#include "Library.h"

int main() {
	Library lib;

	int id1 = lib.addBook("Il Nome della Rosa", "Umberto Eco");
	int id2 = lib.addBook("La Coscienza di Zeno", "Italo Svevo");
	int id3 = lib.addBook("Il Gattopardo", "Giuseppe Tomasi di Lampedusa");

	std::cout << "Elenco libri in biblioteca:\n";
	for (const auto& b : lib.listAll()) {
		std::cout << "  [" << b.getId() << "] " << b.getTitle() << " - " << b.getAuthor();
		if (b.isBorrowed()) std::cout << " (prestato)";
		std::cout << "\n";
	}

	std::cout << "\nProvo a prendere in prestito il libro id=" << id2 << "... ";
	if (lib.borrowBook(id2)) std::cout << "Fatto.\n"; else std::cout << "Fallito.\n";

	std::cout << "Provo di nuovo a prendere lo stesso libro... ";
	if (lib.borrowBook(id2)) std::cout << "Fatto.\n"; else std::cout << "Fallito (già prestato).\n";

	std::cout << "\nStato aggiornato:\n";
	for (const auto& b : lib.listAll()) {
		std::cout << "  [" << b.getId() << "] " << b.getTitle();
		if (b.isBorrowed()) std::cout << " (prestato)";
		std::cout << "\n";
	}

	std::cout << "\nRestituisco il libro id=" << id2 << "... ";
	if (lib.returnBook(id2)) std::cout << "Restituito.\n"; else std::cout << "Errore restituendo.\n";

	std::cout << "\nRicerca per titolo contenente 'Il':\n";
	for (const auto& b : lib.findByTitle("Il")) {
		std::cout << "  [" << b.getId() << "] " << b.getTitle() << "\n";
	}

	return 0;
}
