# Hangman-console-cpp-game
Консольная игра головоломка написанная на С++. Пользователю предстоит угадать зашифрованное слово за 8 попыток.

                            Правила игры:
Игрок выбирает категорию, из которой ему будет загадано слово.
После этого в консоль выводится слово, которое отображается как ряд дефисов "-".

Задача Игрока угадать, что это за слово и ввести его.
На это у него есть 8 попыток.

                            Слово можно ввести двумя способами:

1. По буквам, которые как предполагает игрок имеются в слове.
2. Введя целиком слово, если игрок уверен, что именно это слово загаданно.

                      Подробнее о 1 способе ввода:

Если игрок вводит букву, которая есть в слове, то все "-", загаданного слова где стоит
введенная игроком буква заменяться на эту букву.
Если игрок вводит букву, которой нет в слове, то У него отнимается одна попытка.

                      Подробнее о 2 способе ввода:

Если игрок знает, какое слово загадано, то он может ввести его целиком.
Если введенное игроком слово действительно было загадано, то он побеждает.
В случае если введенное игроком слово не было загадано, он проигрывает.

                      Определение результата игры:

Если попытки игрока закончатся, то он проиграл.
Если игрок отгадал все буквы слова, то он победили.
