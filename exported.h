#pragma once

#include "exported.g.h"

namespace winrt::fnsln::implementation
{
    struct exported : exportedT<exported>
    {
        exported() 
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::fnsln::factory_implementation
{
    struct exported : exportedT<exported, implementation::exported>
    {
    };
}
