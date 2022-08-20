#ifndef KEN_TOKEN_H
#define KEN_TOKEN_H

typedef struct TOKEN_STRUCT{

    char* value;

    enum{

        TOKEN_ID,
        TOKEN_EQUALS,
        TOKEN_LPAREN,
        TOKEN_RPAREN,
        TOKEN_INT,

    } type;

} token_T;

#endif