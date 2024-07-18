document.getElementById("basicform").addEventListener("submit", function(event) {
    event.preventDefault();

    const name = document.getElementById('name').value;
    const email = document.getElementById('email').value;
    const city = document.getElementById('city').value;

    // Log the form data to the console
    console.log('Name:', name);
    console.log('Email:', email);
    console.log('City:', city);

    const result = document.getElementById('result');
    result.innerHTML = `
        <p>Name: ${name}</p>
        <p>Email: ${email}</p>
        <p>City: ${city}</p>
    `;
});
