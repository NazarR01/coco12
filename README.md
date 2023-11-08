Ejemplo IA

Este ejemplo se creo para ser presentado el dia miercoles 8 de noviembre con la finalidad de 
demostrar una IA primitiva usando POO en C++.
A continuacion tienen detalles de su funcionamiento:

#include <iostream> y #include <string>: Estas son directivas de preprocesador que incluyen las bibliotecas estándar de C++ que se necesitan para imprimir mensajes en la consola (iostream) y para trabajar con cadenas de texto (string).

class ChatBot { ... }: Define una clase llamada ChatBot. Esta clase contiene dos métodos públicos: saludar() y responderPregunta(const std::string& pregunta).

void saludar() { ... }: Este método imprime un mensaje de saludo en la consola.

void responderPregunta(const std::string& pregunta) { ... }: Este método toma una pregunta como entrada y, según la pregunta, imprime una respuesta en la consola.

Las respuestas son condicionales y se basan en búsquedas de cadenas utilizando el método find en la cadena de pregunta.

Si encuentra una coincidencia con una de las preguntas clave, imprime la respuesta correspondiente. Si no hay coincidencia, imprime un mensaje genérico de "no entiendo".

int main() { ... }: La función main() es el punto de entrada de un programa C++. En este caso, crea una instancia de la clase ChatBot,

llama al método saludar() para dar la bienvenida al usuario y luego entra en un bucle while (true) que permite al usuario hacer preguntas al ChatBot.

std::string pregunta;: Declara una variable pregunta de tipo std::string que se utiliza para almacenar la pregunta del usuario.

std::getline(std::cin, pregunta);: Esta línea lee una línea de texto desde la entrada estándar (normalmente el teclado) y la almacena en la variable pregunta.

Después, el programa verifica si la pregunta del usuario es igual a "salir". Si es así, el programa imprime un mensaje de despedida y sale del bucle while. De lo contrario,

llama al método responderPregunta() para obtener una respuesta del ChatBot basada en la pregunta ingresada.

El código proporciona una interacción simple con el ChatBot, donde el usuario puede hacer preguntas y recibir respuestas. Puede finalizar la interacción ingresando "salir".
