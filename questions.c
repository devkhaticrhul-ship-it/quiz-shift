#include "questions.h"

Question questionBank[] =
{
    /* ==================== SCIENCE ==================== */

    {
        1,
        "Which planet is known as the Red Planet?",
        "Science",
        1,
        {"Earth", "Mars", "Jupiter", "Venus"},
        2,
        "Mars appears red because of iron oxide on its surface."
    },

    {
        2,
        "What is the chemical symbol for gold?",
        "Science",
        2,
        {"Ag", "Au", "Gd", "Go"},
        2,
        "The chemical symbol for gold is Au."
    },

    {
        3,
        "Which particle has a negative electric charge?",
        "Science",
        2,
        {"Proton", "Neutron", "Electron", "Nucleus"},
        3,
        "An electron carries a negative electric charge."
    },


    /* ==================== TECHNOLOGY ==================== */

    {
        4,
        "Which language is primarily used to style web pages?",
        "Technology",
        1,
        {"HTML", "CSS", "C", "SQL"},
        2,
        "CSS is used to style and design web pages."
    },

    {
        5,
        "What does USB stand for?",
        "Technology",
        1,
        {"Universal Serial Bus",
         "United System Board",
         "Universal System Bridge",
         "User Serial Bus"},
        1,
        "USB stands for Universal Serial Bus."
    },

    {
        6,
        "Which technology is commonly used for contactless payments?",
        "Technology",
        2,
        {"NFC", "FTP", "SMTP", "HTTP"},
        1,
        "NFC allows short-range wireless communication and is widely used for contactless payments."
    },


    /* ==================== HISTORY ==================== */

    {
        7,
        "Who was the first President of the United States?",
        "History",
        1,
        {"Abraham Lincoln",
         "George Washington",
         "Thomas Jefferson",
         "John Adams"},
        2,
        "George Washington became the first President of the United States."
    },

    {
        8,
        "The Industrial Revolution began in which country?",
        "History",
        2,
        {"France", "Germany", "Britain", "Italy"},
        3,
        "The Industrial Revolution began in Britain during the 18th century."
    },

    {
        9,
        "In which year did India gain independence?",
        "History",
        1,
        {"1945", "1946", "1947", "1950"},
        3,
        "India became independent from British rule on 15 August 1947."
    },


    /* ==================== GEOGRAPHY ==================== */

    {
        10,
        "What is the capital of Japan?",
        "Geography",
        1,
        {"Beijing", "Seoul", "Tokyo", "Bangkok"},
        3,
        "Tokyo is the capital city of Japan."
    },

    {
        11,
        "Which is the largest ocean on Earth?",
        "Geography",
        1,
        {"Atlantic Ocean",
         "Indian Ocean",
         "Pacific Ocean",
         "Arctic Ocean"},
        3,
        "The Pacific Ocean is the largest ocean on Earth."
    },

    {
        12,
        "Which country has the largest land area?",
        "Geography",
        2,
        {"Canada", "China", "Russia", "United States"},
        3,
        "Russia is the world's largest country by land area."
    },


    /* ==================== MATHEMATICS ==================== */

    {
        13,
        "What is 12 multiplied by 8?",
        "Mathematics",
        1,
        {"86", "96", "108", "112"},
        2,
        "12 multiplied by 8 equals 96."
    },

    {
        14,
        "What is the square root of 144?",
        "Mathematics",
        1,
        {"10", "11", "12", "14"},
        3,
        "12 multiplied by 12 equals 144."
    },

    {
        15,
        "What is the value of 2 to the power of 5?",
        "Mathematics",
        2,
        {"10", "16", "25", "32"},
        4,
        "2 multiplied by itself five times equals 32."
    },


    /* ==================== COMPUTER SCIENCE ==================== */

    {
        16,
        "What does CPU stand for?",
        "Computer Science",
        1,
        {"Central Processing Unit",
         "Computer Personal Unit",
         "Central Program Utility",
         "Control Processing Unit"},
        1,
        "CPU stands for Central Processing Unit."
    },

    {
        17,
        "Which data structure follows the LIFO principle?",
        "Computer Science",
        2,
        {"Queue", "Stack", "Array", "Tree"},
        2,
        "A stack follows Last In, First Out, or LIFO."
    },

    {
        18,
        "Which algorithm is commonly used to find the shortest path in a graph with non-negative edge weights?",
        "Computer Science",
        3,
        {"Binary Search",
         "Dijkstra's Algorithm",
         "Bubble Sort",
         "Linear Search"},
        2,
        "Dijkstra's Algorithm finds shortest paths when edge weights are non-negative."
    },


    /* ==================== GENERAL KNOWLEDGE ==================== */

    {
        19,
        "How many days are there in a leap year?",
        "General Knowledge",
        1,
        {"364", "365", "366", "367"},
        3,
        "A leap year contains 366 days."
    },

    {
        20,
        "Which is the largest mammal in the world?",
        "General Knowledge",
        1,
        {"African Elephant",
         "Blue Whale",
         "Giraffe",
         "Hippopotamus"},
        2,
        "The blue whale is the largest mammal known to exist."
    },

    {
        21,
        "Which instrument is used to measure atmospheric pressure?",
        "General Knowledge",
        2,
        {"Thermometer", "Barometer", "Hygrometer", "Anemometer"},
        2,
        "A barometer is used to measure atmospheric pressure."
    }
};

int questionCount = sizeof(questionBank) / sizeof(questionBank[0]);