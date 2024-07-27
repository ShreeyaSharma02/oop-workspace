#include <iostream>
int main() {
    char grade1 = 'A';
    char grade2 = 'C';
    char grade3 = 'D';
    char grade4 = 'F'; // Not a valid grade

    print_pass_fail(grade1); // Should print "Pass"
    print_pass_fail(grade2); // Should print "Pass"
    print_pass_fail(grade3); // Should print "Fail"
    print_pass_fail(grade4); // Should print "Nothing"

    return 0;
}