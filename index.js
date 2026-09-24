const typewriterText = document.querySelector("#typewriter-text");

const phrases = [
    "Imagine what is next.",
    "Shape impossible worlds.",
    "Make your vision move."
];

let phraseIndex = 0;
let characterIndex = 0;
let isDeleting = false;

function typeNextCharacter() {
    const phrase = phrases[phraseIndex];
    typewriterText.textContent = phrase.slice(0, characterIndex);

    if (!isDeleting && characterIndex < phrase.length) {
        characterIndex += 1;
        window.setTimeout(typeNextCharacter, 75);
        return;
    }

    if (isDeleting && characterIndex > 0) {
        characterIndex -= 1;
        window.setTimeout(typeNextCharacter, 38);
        return;
    }

    if (!isDeleting) {
        isDeleting = true;
        window.setTimeout(typeNextCharacter, 1500);
        return;
    }

    isDeleting = false;
    phraseIndex = (phraseIndex + 1) % phrases.length;
    window.setTimeout(typeNextCharacter, 350);
}

typeNextCharacter();