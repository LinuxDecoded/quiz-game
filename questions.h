typedef struct skeleton
{   
    int quesNumber;
    char quest[255];
    char options[4][50];
    char answer[50]; 
} question;

question questions[30] = {
                            {1, "Which of the following is a Palindrome number?", {"42042","101010","23232","01234"}, "23232"},
                            {2, "The country with the highest environmental performance index is?", {"France","Denmark","Switzerland","Finland"}, "Switzerland"},
                            {3, "Which animal laughs like a human being?", {"Polar Bear","Hyena","Donkey","Chimpanzee"}, "Hyena"},
                            {4, "Who was awarded the youngest player award in Fifa World Cup 2006?", {"Wayne Rooney","Lucas Podolski","Lionel Messi","Christiano Ronaldo"}, "Lucas Podolski"},
                            {5, "Which is the third highest mountain in the world?", {"Mt. K2","Mt. Kanchanjungha","Mt. Makalu","Mt. Kilimanjaro"}, "Mt. Kanchanjungha"},
                            {6, "What is the group of frogs known as?", {"A traffic","A toddler","A police","An Army"}, "An Army"},
                            {7, "What is the National Game of England?", {"Football","Basketball","Cricket","Baseball"}, "Cricket"},
                            {8, "Study of Earthquake is called?", {"Seismology","Cosmology","Orology","Etimology"}, "Seismology"},
                            {9, "Among the top 10 highest peaks in the world, how many lie in Nepal?", {"6","7","8","9"}, "8"},
                            {10, "The Laws of Electromagnetic Induction were given by?", {"Faraday","Tesla","Maxwell","Coulomb"}, "Faraday"},
                            {11, "In what unit is electric power measured?", {"Coulomb","Watt","Power","Units"}, "Watt"},
                            {12, "Which element is found in Vitamin B12?", {"Zinc","Cobalt","Calcium","Iron"}, "Cobalt"},
                            {13, "What is the National Name of Japan?", {"Polska","Hellas","Drukyul","Nippon"}, "Nippon"},
                            {14, "How many times a piece of paper can be folded at the most?", {"6","7","8","Depends on the size of paper"}, "7"},
                            {15, "What is the capital of Denmark?", {"Copenhagen","Helsinki","Ajax","Galatasaray"}, "Copenhagen"},
                            {16, "Which is the Longest River in the world?", {"a","b","c","d"}, "answer"},
                            {17, "What is the color of the Black Box in airplanes?", {"a","b","c","d"}, "answer"},
                            {18, "Which city is known as 'The City of Seven Hills'?", {"a","b","c","d"}, "answer"},
                            {19, "Name the country where there no mosquitoes are found?", {"a","b","c","d"}, "answer"},
                            {20, "Who is the author of 'Pulpasa Cafe'?", {"a","b","c","d"}, "answer"},
                            {21, "Which Blood Group is known as the Universal Recipient?", {"a","b","c","d"}, "answer"},
                            {22, "What is the unit of measurement of the distance between Stars?", {"a","b","c","d"}, "answer"},
                            {23, "The country famous for Samba Dance is?", {"a","b","c","d"}, "answer"},
                            {24, "Wind speed is measure by?", {"a","b","c","d"}, "answer"},
                            {25, "Which city in the world is popularly known as The City of Temple?", {"a","b","c","d"}, "answer"},
                            {26, "Which hardware was used in the First Generation Computer?", {"a","b","c","d"}, "answer"},
                            {27, "Ozone plate is being destroyed regularly because of?", {"a","b","c","d"}, "answer"},
                            {28, "Who won the Women's Australian Open Tennis in 2007?", {"a","b","c","d"}, "answer"},
                            {29, "Which film was awarded the Best Motion Picture at Oscar in 2010?", {"a","b","c","d"}, "answer"},
                        };