<h1>Checkpoint 01 Edge Computing and Computer Systems - Lucas Demetrius Augusto</h1>

###

<h3>Sobre o Projeto</h3>
<p>Nosso projeto é um sistema de monitoramento de luminosidade, onde temos um LDR (Light Dependent Resistor) conectado a um arduino. Ele foi desenvolvido usando a linguagem C</p>
###

<h3>Equipamentos e montagem</h3>

<p>Utilizaremos o Arduino Uno e uma breadboard, para nos auxiliar na realização do projeto.</p>
<p>Utilizaremos três leds, um verde com o cátono na posição F4 e com o ânodo no F5 , um vermelho cátono na posição F24 e com o ânodo no F25 e um amarelo cátono na posição F14 e com o ânodo no F15.</p>
<p>Utilizarremos um sensor de luminosidade com o ldr1:VCC conectado por um jumper no pin 5V, o GND conectado ao GND do arduino e o lrd1:A0 no pin A0.</p>
<p>Utilizaremos 3 resistores de 220Ω, na hora de conectar, encaixe eles horizontalmente. O primeiro está conectado embaixo do ânodo do led verde (G11), o segundo está logo abaixo do ânodo do led amarelo (G21) e o último, no âdono do led vermelho (G31).</p>
<p>Utilizaremos 9 jumpers machos no breadboard.</p>

<ul>
  <li>O primeiro é o do GND, esse jumper é conectado no pin GND do arduino e na primeira entreda negativa no breadboard.</li>
  <li>Conecte um jumper embaixo do cátono em cada LED. Um no G4, o segundo no G14 e o último no G24. Conecte todos na mesma linha do GND</li>
  <li>Agora, adicione um jumper na ponta solta de cada resistor. O primeiro vai conectar na posição H11 e no pin 13. O jumper do resistor do led amarelo vai conectar na posição H21 e no pin 12. O último vai ficar na posição H31 conectado no pin 11</li>
  <li>Os últimos 2 são no buzzer. Adicione um embaixo do cátono na posição H35, e conecte na linha do GND. Adicione outro jumper no âdono na posição H36, e conecte no pin 10 do arduino</li>
</ul>

<p>Utilizaremos um buzzer com o cátono na posição G35.</p>

<p>Se tiver alguma dúvida de como montar, acesse <a href="https://wokwi.com/projects/428328074372035585">projeto de exemplo</a></p>

###

<h2>Wokwi - Simulação</h2>

####

<h3>Passo a Passo</h3>

<ul>
  <li>
    <p>Acesse o site <a href="https://wokwi.com">Wokwi</a>.</p>
  </li>
  <li>
    <p>Clique em "Arduino (Uno, Mega, Nano)".</p>
  </li>
  <li>
    <p>Procure por "Arduino Uno" e clique.</p>
  </li>
  <li>
    <p>Adicione todos os equipamentos listados acima.</p>
  </li>
  <li>
    <p>Copie e cole o código do arquivo (x).</p>
  </li>
  <li>
    <p>Compile e rode o código.</p>
  </li>
</ul>




