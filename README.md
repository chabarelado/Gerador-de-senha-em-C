# Gerador-de-senha-em-C

# 🔐 Gerador de Senhas em C

Este é um programa em linguagem C que gera senhas aleatórias com base nas preferências do usuário. O usuário pode escolher o tamanho da senha e se ela deve conter letras maiúsculas, minúsculas, números e/ou caracteres especiais.

---

## 🛠️ Funcionalidades

- Geração de senhas com:
  - Letras **maiúsculas** (`A-Z`)
  - Letras **minúsculas** (`a-z`)
  - **Números** (`0-9`)
  - **Caracteres especiais** (`!@#$%^&*...`)
- Validação para tamanho mínimo da senha.
- Possibilidade de gerar múltiplas senhas em sequência.
- Exibição da senha gerada no terminal.

---

## 💻 Requisitos

- Compilador C (ex: `gcc`)
- Sistema operacional compatível com C padrão (Linux, Windows, macOS)

---

## 🚀 Como compilar e executar

### 1. Compile o código:

```bash
gcc gerador_senha.c -o gerador_senha

2. Execute o programa:

./gerador_senha

🧪 Exemplo de uso

> Digite o tamanho da senha (mínimo 8 caracteres): 12
> A senha deve possuir letras maiusculas(S/N)? S
> A senha deve possuir letras minusculas(S/N)? S
> A senha deve possuir números(S/N)? S
> A senha deve possuir caracteres especiais(S/N)? N

> A senha gerada é 4WbCc9hQnKGr

> Deseja gerar uma nova senha(S/N)? N

📄 Estrutura do código
main()

Responsável por:

    Ler entradas do usuário

    Validar tamanho mínimo da senha

    Repetir a geração se o usuário desejar

Gerador_de_Senha()

Função principal para:

    Montar o conjunto de caracteres possíveis com base nas escolhas do usuário

    Gerar a senha aleatória usando rand()

    Exibir a senha no final

⚠️ Observações

    A função rand() é inicializada com srand(time(0)), então a cada execução a senha muda.

    O programa não garante a presença de pelo menos um caractere de cada tipo escolhido (isso pode ser adicionado como melhoria futura).

    A senha gerada pode conter caracteres repetidos.

✨ Possíveis melhorias

    Garantir ao menos um caractere de cada tipo selecionado pelo usuário.

    Embaralhar os caracteres para evitar previsibilidade.

    Implementar estrutura struct para organização dos dados.

    Criar interface com menus mais visuais ou até GUI.

    Salvar senhas em arquivo .txt.
