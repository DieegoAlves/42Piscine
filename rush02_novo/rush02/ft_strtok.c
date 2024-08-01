#include "header.h"

// Variável estática para manter o estado entre chamadas
static char *current_position;

// Função para verificar se um caractere está em uma string de delimitadores
static bool ft_delimiter(char c, const char *delim) {
    while (*delim) {
        if (c == *delim)
            return true;
        delim++;
    }
    return false;
}

char *ft_strtok(char *str, const char *delim) {
    // Inicialização da posição atual na string
    if (str != NULL) {
        current_position = str;
    } else if (current_position == NULL) {
        return NULL;
    }

    // Ignora delimitadores iniciais
    while (ft_delimiter(*current_position, delim)) {
        current_position++;
    }

    // Verifica se chegamos ao final da string
    if (*current_position == '\0') {
        return NULL;
    }

    // Início do próximo token
    char *token_start = current_position;

    // Percorre a string até encontrar um delimitador ou o final da string
    while (*current_position && !ft_delimiter(*current_position, delim)) {
        current_position++;
    }

    // Se não estamos no final da string, substitui o delimitador por '\0'
    if (*current_position) {
        *current_position = '\0';
        current_position++;
    }

    // Retorna o token encontrado
    return token_start;
}