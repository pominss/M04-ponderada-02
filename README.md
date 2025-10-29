# M04-ponderada-02

## Link vídeo: https://drive.google.com/file/d/1uN3wkVeX1_7f3cTcNA00HZeG2PukRpLC/view?usp=sharing

## Materiais utilizados:
|Material|  Especificação|
|-|-|
|Led 1  |Vermelho|
|Led 2  |Amarelo|
|Led 3  |Verde|
|Resistores  |330 ohms|
|Arduino  |Uno|
|4 Jumpers  |Macho/Macho|
|6 Jumpers  |Macho/Fêmea|


## Explicação:
Para a montagem do semáforo físico utilizei 1 arduino uno, 3 leds (1 vermelho, 1 amarelo e 1 verde), 3 resistores de 330 ohms, 4 jumpers macho/macho, 6 jumpers macho/fêmea e uma protoboard. Comecei a montagem conectando um jumper macho/macho no gnd do arduino à coluna negativa da protoboard, após isso conectei 3 jumpers macho/macho nas portas 8, 9 e 10 do arduino e as liguei em 3 linhas diferentes e os 3 resistores cada um ligado a um dos fios, em seguida liguei 3 jupers macho/fêmea em série com os resistores e conectei a parte fêmea no polo positivo de cada led, por fim conectei mais 3 jumpers macho fêmeas porém dessa vez na parte negativa do led e conectei a parte macho na coluna negativa da protoboard a que está conectada com o gnd assim fechando o cicuito.

## Avalição 1:
#### Avaliador: Leonardo Corbi
|Critério|  Contempla (Pontos)| Contempla Parcialmente (Pontos) |Não Contempla (Pontos) |Observações do Avaliador|
|-|-|-|-|-|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores   |3  |   || |
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo |3  |   | | |
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |  3|   |   | |
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código |   |  0,5 |   | |
| | | | |Pontuação Total: 9,5|


## Avaliação 2:

#### Avaliador: Leandro Filho
|Critério|  Contempla (Pontos)| Contempla Parcialmente (Pontos) |Não Contempla (Pontos) |Observações do Avaliador|
|-|-|-|-|-|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores   |3  |   || |
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo |3  |   | | |
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |  3|   |   | |
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código |   |  0,5 |   | |
| | | | |Pontuação Total: 9,5|
