async function lerJson(){
    const filmes = await fetch('./assets/json/filme.json');
    const data = await filmes.json();
    const titulo = document.getElementById('titulo');
    titulo.textContent = data.filme.titulo
    const sinopse = document.getElementById('sinopse');
    sinopse.textContent += data.filme.sinopse
    const categorias = document.getElementById('categorias');
    categorias.textContent = data.filme.categoria
    const lancamento = document.getElementById('lancamento');
    lancamento.textContent = data.filme.lancamento
    const ondeencontrar = document.getElementById('ondeencontrar');
    data.filme.streaming.forEach(element => {
    ondeencontrar.textContent += element.nome+", "
    });
    const diretor = document.getElementById('diretor');
    diretor.textContent = data.filme.diretor
    const atores = document.getElementById('atores');
    data.filme.atores.forEach(element => {
    atores.textContent += element.nome+", "
    });
    const listatrailer = document.getElementById('listatrailer');
    data.filme.trailers.forEach(element => {
        const li = document.createElement('li')
        const a = document.createElement('a')
    li.appendChild(a)
    a.href += element.link
    });
    const imdb = document.getElementById('imdb');
    imdb.textContent += data.filme.imdb
    const rotten = document.getElementById('rotten');
    rotten.textContent += data.filme.rotten
    }
    document.addEventListener('DOMContentLoaded', lerJson);