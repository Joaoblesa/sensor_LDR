# Monitoramento de Luminosidade com ESP32
## Projeto Didático IIoT - SENAI Jandira

Este projeto foi desenvolvido como parte das atividades práticas do curso de **IIoT (Internet das Coisas Industrial)** no **SENAI Jandira**. O objetivo é aplicar conhecimentos de eletrônica analógica e programação para monitorar níveis de luz ambiente utilizando um sensor **LDR (Light Dependent Resistor)** e a plataforma **ESP32**.

## 📝 Descrição do Projeto

O sistema utiliza um divisor de tensão com um sensor LDR para detectar a variação da luminosidade no ambiente. O **ESP32** realiza a leitura analógica desse sinal e, com base em um limiar (threshold) pré-definido, aciona um **LED** automaticamente quando a luz cai abaixo de determinado nível. 

Este é um projeto fundamental para o desenvolvimento de soluções de:
* **Smart Lighting:** Iluminação inteligente para eficiência energética.
* **Segurança Industrial:** Acionamento de balizadores em áreas críticas.
* **Automação de Galpões:** Controle de iluminação baseado na luz natural.



## 🛠️ Recursos e Componentes

Para a montagem deste esquema, foram utilizados os seguintes itens:

| Componente | Especificação |
| :--- | :--- |
| **Microcontrolador** | ESP32 (NodeMCU) |
| **Sensor** | LDR 5mm (Resistor Dependente de Luz) |
| **Atuador** | 1x LED Difuso |
| **Resistores** | 1x 10kΩ (Divisor de Tensão) e 1x 220Ω (Proteção LED) |
| **Conexão** | Protoboard e Jumpers Macho-Macho |
| **Alimentação** | Cabo Micro-USB |

## Autores

- [Carlos Eduardo.](https://github.com/carlosedusp05)
- [Paulo Vinicius.](https://github.com/Oluapvinicius)
- [Joao Blesa](https://github.com/Joaoblesa)
