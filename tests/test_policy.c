#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {73, 105, 20, 17, 13};
    assert(score_signal(signal_case_1) == 208);
    assert(strcmp(classify_signal(signal_case_1), "accept") == 0);
    Signal signal_case_2 = {92, 103, 19, 19, 6};
    assert(score_signal(signal_case_2) == 203);
    assert(strcmp(classify_signal(signal_case_2), "accept") == 0);
    Signal signal_case_3 = {88, 75, 21, 23, 7};
    assert(score_signal(signal_case_3) == 152);
    assert(strcmp(classify_signal(signal_case_3), "review") == 0);
    return 0;
}
