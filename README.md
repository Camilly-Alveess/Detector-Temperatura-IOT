# Detector de Temperatura e Umidade com Arduino e Sensor DHT11
Este repositório contém a documentação e o código-fonte para um detector de temperatura e umidade utilizando o Arduino IDE, uma placa de Arduino, um sensor DHT11, display e jumpers. Este projeto é útil para monitorar as condições ambientais em diferentes ambientes, como em casa, no escritório, ou em projetos de automação residencial.

## Componentes Necessários
* Placa de Arduino (por exemplo, Arduino Uno)
* Sensor DHT11
* Display LED
* Jumpers (cabos jumper macho-macho e macho-fêmea)

## Passos para Desenvolvimento
1. Seleção dos Componentes: Inicialmente, foram selecionados os componentes necessários para o projeto, incluindo uma placa de Arduino Uno, um sensor de temperatura e umidade DHT11, um display led e jumpers para conexão.
2. Instalação do Arduino IDE: O Arduino IDE foi baixado e instalado a partir do [site oficial do Arduino](https://www.arduino.cc/en/software), seguindo as instruções específicas para o sistema operacional utilizado.
3. Conexão do Sensor DHT11: O sensor DHT11 foi conectado à placa de Arduino utilizando jumpers. Verificou-se o datasheet do sensor para garantir a correta conexão dos pinos. Indicado seguir a imagem abaixo:

   ![image](https://github.com/Camilly-Alveess/Detector-Temperatura-IOT/assets/142948474/a6005878-c443-405a-91c9-bb3b3380ffa0)
   
5. Desenvolvimento do Código-fonte: Utilizando o Arduino IDE, foi desenvolvido o código-fonte para ler os dados de temperatura e umidade do sensor DHT11. A biblioteca DHT.h foi utilizada para facilitar a comunicação com o sensor.
6. Testes Locais: O código foi testado localmente para verificar se o sensor estava funcionando corretamente e se os dados de temperatura e umidade estavam sendo lidos com precisão.
7. Ajustes e Melhorias: Foram feitos ajustes no código conforme necessário, como a definição do tipo correto do sensor (DHT11) e apresentação dos valores no display, o ajuste da taxa de leitura dos dados e a adição de comentários para facilitar a compreensão do código. As melhorias citadas podem ser analisadas no código arquivado neste repositório.
8. Carregamento do Código no Arduino: Após finalizar o desenvolvimento e testes locais, o código foi carregado no Arduino conectado ao computador via USB. Verificou-se se o código estava sendo executado corretamente no Arduino.

## Uso
Após o carregamento do código no Arduino, o sensor DHT11 começará a ler os dados de temperatura e umidade do ambiente. Os valores podem ser visualizados através do monitor serial do Arduino IDE, onde são exibidos em intervalos regulares.

## Contribuição
Contribuições são bem-vindas! Se você encontrar algum problema, ou deseja melhorar o código ou a documentação, sinta-se à vontade para abrir uma issue ou enviar um pull request. =)
