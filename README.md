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
  - Cada módulo acompanhado de guia estruturado em PDF
  
### PAA - Projeto e Análise de Algoritmos
- Análise de complexidade (Big O)
- Estruturas de dados avançadas
- Algoritmos de ordenação, busca e grafos

### PSD - Processamento de Sinais Digitais
**Referências acadêmicas mantidas no repositório**:
- Papers fundamentais para o Projeto Final em `PSD/Projeto_Final/`:
  - **"Periodic plus smooth image decomposition"** (Morel & Yu) - Base teórica do projeto
  - **Kurtosis-based Statistical Measures** - Análise de qualidade de imagens
  - **Trabalhos em microscopia intravital** - Aplicações biomédicas

Notebooks interativos disponíveis em `PSD/Projeto_Final/` e `PSD/Lab0.ipynb`

---

## 🚫 Otimização do Repositório

Este repositório foi otimizado para eficiência de versionamento:

**Arquivos excluídos do Git** (disponível localmente):
- Livros e materialDidáticos acadêmicos (Controle Automático)
- Compilados e executáveis (*.exe, *.o, *.dll)
- Cache de Python (__pycache__/, .ipynb_checkpoints/)
- Virtual environment (PSD/venv/)

**Mantidos por importância** ✅:
- PDFs de roteiros em POO/ (essenciais para enunciados dos exercícios)
- PDFs de papers em PSD/Projeto_Final/ (fundamentam a implementação)

---

## 📌 Como Usar

1. **Para estudar POO**: Consulte os PDFs dos roteiros dentro de cada módulo
2. **Para análise em PSD**: Verifique os Jupyter Notebooks e papers de referência
3. **Para práticas PAA**: Compile e execute os programas em C

Repositório pronto para portfólio profissional! 🎯

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
