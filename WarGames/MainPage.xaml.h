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

		void nvTopLevelNav_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void nvTopLevelNav_SelectionChanged(Windows::UI::Xaml::Controls::NavigationView^ sender, Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs^ args);
		void nvTopLevelNav_ItemInvoked(Windows::UI::Xaml::Controls::NavigationView^ sender, Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs^ args);
	};
}
