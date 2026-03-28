# Repositório UFSCar - Programação e Engenharia

Repositório pessoal contendo trabalhos acadêmicos dos cursos de **Programação Orientada a Objetos (POO)**, **Projeto e Análise de Algoritmos (PAA)**, **Processamento de Sinais Digitais (PSD)**, **Arquitetura e Organização de Computadores (Arq2)** e **Controle Automático**.

## 📚 Estrutura do Repositório

```
├── PAA/                   # Projeto e Análise de Algoritmos
│   ├── TP01/             # TP1 - Análise de Complexidade
│   ├── TP02/             # TP2 - Estruturas de Dados
│   └── TP03/             # TP3 - Algoritmos Avançados
├── POO/                   # Programação Orientada a Objetos (C++)
│   ├── Modulo01-18/      # Módulos teóricos com exercícios e roteiros
│   └── *.pdf             # Referências dos roteiros de cada módulo
├── PSD/                   # Processamento de Sinais Digitais (Python)
│   ├── Projeto_Final/    # Projeto integrador de processamento de imagens
│   └── *.ipynb           # Notebooks com análises e protótipos
├── Arq2/                  # Arquitetura de Computadores
│   └── semana*/          # Exercícios práticos com sensores (Python)
├── Controle/             # Controle Automático
│   └── *                 # Estudos e exercícios
└── README.md             # Este arquivo
```

## 🛠️ Tecnologias

- **C/C++**: POO, PAA, Estruturas de Dados
- **Python**: PSD, Arduino/Sensores (Arq2), Análise de Dados
- **Jupyter Notebooks**: Visualizações e protótipos de PSD

## 📖 Referências Externas

### POO - Programação Orientada a Objetos
- **Roteiros Didáticos**: Disponíveis em `POO/ModuloXX/Roteiro*.pdf`
  - Teoria de classes, herança, polimorfismo, sobrecarga de operadores
  - Templates C++, gerenciamento de memória, arquivos
  
### PAA - Projeto e Análise de Algoritmos
- Análise de complexidade (Big O)
- Estruturas de dados avançadas
- Algoritmos de ordenação, busca e grafos

### PSD - Processamento de Sinais Digitais
**Referências acadêmicas** (não incluídas por tamanho):
- "Periodic plus smooth image decomposition" - Trabalho base para filtragem de imagens
- Papers sobre análise de curtose em processamento 2D
- Trabalho em microscopia intravital com processamento de sinais
- Metodologias de decomposição de imagens

Notebooks interativos disponíveis em `PSD/Projeto_Final/` e `PSD/Lab0.ipynb`

### Arq2 - Arquitetura e Organização
- Práticas com sensores de temperatura, luz giratória (Arduino)
- Programação em Python para microcontroladores

### Controle - Controle Automático
**Referências acadêmicas** (Bolton - em português):
- Livro: "Engenharia de Controle" de Bolton
- Capítulos sobre respostas de sistema, diagramas de Nyquist, controladores
- Materiais de resumo em `Controle 1/Resumos/`

## 🚀 Como Usar

### Compilar C/C++
```bash
# POO - usar Makefile ou:
g++ -std=c++17 main.cpp -o output

# PAA:
gcc -O2 arquivo.c -o output
```

### Executar Python
```bash
python3 script.py

# Para análise de PSD:
jupyter notebook PSD/Lab0.ipynb
```

## 📝 Notas

- Arquivos grandes (PDFs acadêmicos, datasets) não estão incluídos no repositório para manter leveza
- PDFs de roteiros e enunciados (essenciais) estão incluídos em `POO/` e `PSD/`
- Versionamento segue padrões profissionais: `.gitignore` exclusivo para compilados, cache e dependências

## 📜 Licença

Repositório pessoal para fins educacionais. UFSCar - Universidade Federal de São Carlos.

---

**Última atualização**: 2026  
**Organização**: Estrutura profissional com versionamento Git otimizado
