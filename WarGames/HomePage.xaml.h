//
// HomePage.xaml.h
// Deklaracja klasy HomePage
//

#pragma once

#include "HomePage.g.h"

namespace WarGames
{
	/// <summary>
	/// Pusta strona, która może być używana samodzielnie lub do której można nawigować wewnątrz ramki.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class HomePage sealed
	{
	public:
		HomePage();
	private:
		void New_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Load_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Stats_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void About_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
