#include <iostream>
#include <fstream>
using namespace std;

struct Prod {
    int cod;
    float preco_custo;
    float preco_venda;
    int quant;
};

float lucro(Prod p) {
    return (p.preco_venda - p.preco_custo) * p.quant;
}

int main() {
    ofstream arquivo;
    int num_prod;

    arquivo.open("produtos.txt", ios::app);

    cout << "Quantos produtos deseja cadastrar: ";
    cin >> num_prod;

    for (int cont = 0; cont < num_prod; cont++) {
        Prod prod;

        cout << "Informe o codigo do produto: ";
        cin >> prod.cod;

        cout << "Informe o preco de custo do produto: ";
        cin >> prod.preco_custo;

        cout << "Informe o preco de venda do produto: ";
        cin >> prod.preco_venda;

        cout << "Informe a quantidade em estoque do produto: ";
        cin >> prod.quant;

        float l = lucro(prod);

        cout << "O produto: " << prod.cod << " pode gerar R$ " << l << " de lucro." << endl;

        // Grava no arquivo
        arquivo << "Codigo do produto: " << prod.cod << endl;
        arquivo << "Preco de custo: " << prod.preco_custo << endl;
        arquivo << "Preco de venda: " << prod.preco_venda << endl;
        arquivo << "Quantidade em estoque: " << prod.quant << endl;
        arquivo << "Lucro estimado: R$ " << l << endl;
        arquivo << "---------------------------" << endl;
    }

    arquivo.close();
    return 0;
}

