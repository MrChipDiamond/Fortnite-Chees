#include "pch.h"
#include "exported.h"
#if __has_include("exported.g.cpp")
#include "exported.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::fnsln::implementation
{
    int32_t exported::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void exported::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void exported::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
