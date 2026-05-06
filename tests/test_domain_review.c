#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {42, 49, 11, 46};
    assert(domain_review_score(item) == 146);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
