#include <iostream>
#include <string>

class ChatBot {
public:
    void saludar() {
        std::cout << "Hola, soy un ChatBot. ¿En qué puedo ayudarte?" << std::endl;
    }

    void responderPregunta(const std::string& pregunta) {
        if (pregunta.find("color favorito") != std::string::npos) {
            std::cout << "Mi color favorito es el azul." << std::endl;
        } else if (pregunta.find("1939-1945") != std::string::npos) {
            std::cout << "Entre 1939 y 1945 ocurrió la Segunda Guerra Mundial." << std::endl;
        } else if (pregunta.find("Primera Guerra Mundial") != std::string::npos) {
            std::cout << "La Primera Guerra Mundial comenzó en 1914 debido a una serie de tensiones políticas y territoriales en Europa." << std::endl;
        } else if (pregunta.find("clase más difícil del semestre") != std::string::npos) {
            std::cout << "La clase más difícil del semestre es Conceptos de Lenguajes." << std::endl;
        } else if (pregunta.find("quien es el profesor de conceptos") != std::string::npos) {
            std::cout << "El profesor de la clase es el Profesor Grevin." << std::endl;
        } else if (pregunta.find("the goat") != std::string::npos) {
            std::cout << "The goat es el Profesor Norwing." << std::endl;
        } else if (pregunta.find("ayuda") != std::string::npos) {
            std::cout << "Estoy aquí para responder tus preguntas. ¿En qué más puedo ayudarte?" << std::endl;
        } else {
            std::cout << "Lo siento, no entiendo esa pregunta." << std::endl;
        }
    }
};

int main() {
    ChatBot chatBot;
    chatBot.saludar();

    while (true) {
        std::string pregunta;
        std::cout << "Tú: ";
        std::getline(std::cin, pregunta);

        if (pregunta == "salir") {
            std::cout << "ChatBot: Hasta luego. ¡Vuelve pronto!" << std::endl;
            break;
        }

        chatBot.responderPregunta(pregunta);
    }

    return 0;
}