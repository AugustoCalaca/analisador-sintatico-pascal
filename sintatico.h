#include "lexico.cpp"

class Sintatico : public Lexico {
  public:
    void avancar();
    void eat(int token_consumir);
    void error();
    void error(int erro, int queria);

    void programa();
    void bloco();
    void rotulos();
    void constantes();
    void variaveis();
    void rotina();
    void funcao();
    void procedimento();
    void corpo();
    void tipo();
    void parametros_formais();
    void parametro_formal();
    void parametro_expressao();
    void comando();
    void variavel();
    void comando_sem_rotulo();
    void atribuicao();
    void chamada_de_procedimento();
    void desvio();
    void composto();
    void condicional();
    void repetitivo();
    void vazio();
    void expressao();
    void operador_relacional();
    void expressao_simples();
    void operador_aditivo();
    void termo();
    void operador_multiplicativo();
    void fator();
    void chamada_de_funcao();
    void constante();
    void numero();
    void identificador();
    void lista_de_identificadores();
    void lista_de_numeros();
    void lista_de_expressoes();
  private:
    int tok;
    int linha;

};
