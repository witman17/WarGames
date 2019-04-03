//
// MainPage.xaml.h
// Deklaracja klasy MainPage.
//

#pragma once

#include "MainPage.g.h"

namespace WarGames
{
	/// <summary>
	/// Pusta strona, która może być używana samodzielnie lub do której można nawigować wewnątrz ramki.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void Test_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
