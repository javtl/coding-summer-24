const questions = [
    {
      question: "What is the capital of France?",
      answers: ["London", "Paris", "Berlin", "Rome"],
      correctAnswer: 1 // The correct answer index (0-based)
    },
    {
      question: "What is 2 + 2?",
      answers: ["3", "4", "5", "6"],
      correctAnswer: 1
    },
    // Add more questions here...
  ];
  
  let currentQuestionIndex = 0;
  let score = 0;
  
  function displayQuestion() {
    const questionElement = document.getElementById("question");
    const answerButtons = document.querySelectorAll(".btn");
    const currentQuestion = questions[currentQuestionIndex];
  
    questionElement.textContent = currentQuestion.question;
  
    answerButtons.forEach((button, index) => {
      button.textContent = currentQuestion.answers[index];
      button.style.backgroundColor = "#f0f0f0"; // Reset button color to default
    });
  }
  
  function checkAnswer(selectedAnswerIndex) {
    const answerButtons = document.querySelectorAll(".btn");
    const currentQuestion = questions[currentQuestionIndex];
  
    if (selectedAnswerIndex === currentQuestion.correctAnswer) {
      score++;
      answerButtons[selectedAnswerIndex].style.backgroundColor = "green";
    } else {
      answerButtons[selectedAnswerIndex].style.backgroundColor = "red";
    }
    // Disable buttons after user selects an answer
    answerButtons.forEach(button => button.disabled = true);
  }
  
  function nextQuestion() {
    const answerButtons = document.querySelectorAll(".btn");
    currentQuestionIndex++;
    if (currentQuestionIndex < questions.length) {
      displayQuestion();
      answerButtons.forEach(button => button.disabled = false); // Enable buttons for the next question
    } else {
      showResults();
    }
  }
  
  function showResults() {
    const quizElement = document.querySelector(".quiz");
    quizElement.innerHTML = `<h2>Your score: ${score} out of ${questions.length}</h2>`;
  }
  
  displayQuestion();
  