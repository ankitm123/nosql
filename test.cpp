#include <hiredis/hiredis.h>
#include <iostream>

using namespace std;

int main() {
    redisContext *c = redisConnect("localhost", 6379);
    if (c != NULL && c->err) {
        printf("Error: %s\n", c->errstr);
    } else {
        cout << "Connected to Redis, testing hiredis" << endl;
    }

    redisFree(c);
}