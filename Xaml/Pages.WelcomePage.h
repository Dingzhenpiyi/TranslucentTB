#pragma once

#include "Pages.WelcomePage.g.h"

namespace winrt::TranslucentTB::Xaml::Pages::implementation
{
	struct WelcomePage : WelcomePageT<WelcomePage>
	{
		WelcomePage(hstring configFile);

		void ForwardActionClick(const Windows::Foundation::IInspectable &sender, const Windows::UI::Xaml::Controls::ItemClickEventArgs &args);
		fire_and_forget RevealConfigFile(const Windows::Foundation::IInspectable &sender, const Windows::UI::Xaml::RoutedEventArgs &args);
		void EditConfigFile(const Windows::Foundation::IInspectable &sender, const Windows::UI::Xaml::RoutedEventArgs &args);

	private:
		hstring m_ConfigFile;
	};
}

namespace winrt::TranslucentTB::Xaml::Pages::factory_implementation
{
	struct WelcomePage : WelcomePageT<WelcomePage, implementation::WelcomePage>
	{
	};
}
