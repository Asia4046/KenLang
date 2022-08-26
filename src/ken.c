#include "include/ken.h"
#include "include/lexer.h"
#include "include/io.h"
#include <stdlib.h>

void ken_compile(char* src) {
    lexer_T* lexer = init_lexer(src);
    token_T* tok = 0;

    while((tok = lexer_next_token(lexer))->type != TOKEN_EOF)
    {
        printf("TOK(%s) (%d)\n", tok->value, tok->type);
    }
}

void ken_compile_file(const char* filename)
{
    char* src = ken_read_file(filename);
    ken_compile(src);
    free(src);
}
