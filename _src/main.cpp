#include "__preprocessor__.h"

class test
{
    int tab
        [100];
};

#ifdef BUILD_EXECUTABLE
int main(
    int argc,
    char*
        argv[])
{
    srand(time(
        NULL));
    // CORE::clear_terminal();
    time_stamp(
        "It "
        "just "
        "work"
        "s");

    CORE::str::
        split_string(
            "H"
            "e"
            "l"
            "l"
            "o"
            ","
            " "
            "W"
            "o"
            "r"
            "l"
            "d"
            "!",
            ' ');
    var(CORE::str::to_lower_case(
        "Hello"
        ", "
        "World"
        "!"));

    show_sizeof(
        test);
    show_sizeof_many(
        test,
        100);

    int num =
        123456789;
    double num2 =
        1234567.89123;

    cout
        << CORE::format_number(
               num)
        << endl;
    cout
        << CORE::format_number(
               num2)
        << endl;

    return 0;
}
#endif