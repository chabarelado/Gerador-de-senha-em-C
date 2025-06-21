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
