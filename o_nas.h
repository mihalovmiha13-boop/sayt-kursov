<!DOCTYPE html>
<html lang="ru">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>О компании Водэко — Каталог решений</title>
    <style>
        :root {
            --primary-color: #0056b3;
            --accent-color: #ff9800;
            --bg-light: #f4f6f9;
            --text-dark: #333;
        }

        * {
            box-sizing: border-box;
            margin: 0;
            padding: 0;
        }

        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: var(--bg-light);
            color: var(--text-dark);
            min-height: 100vh;
            display: flex;
            flex-direction: column;
        }

        /* Навигация */
        header {
            background: #fff;
            box-shadow: 0 2px 10px rgba(0,0,0,0.1);
            position: sticky;
            top: 0;
            z-index: 1000;
        }

        nav {
            max-width: 1200px;
            margin: 0 auto;
            padding: 15px 20px;
        }

        .nav-container {
            display: flex;
            justify-content: space-between;
            align-items: center;
        }

        .logo {
            font-weight: bold;
            color: var(--primary-color);
            font-size: 1.5rem;
            text-decoration: none;
        }

        .menu ul {
            list-style: none;
            display: flex;
            gap: 20px;
        }

        .menu a {
            text-decoration: none;
            color: var(--text-dark);
            font-weight: 500;
            transition: color 0.3s;
        }

        .menu a:hover {
            color: var(--primary-color);
        }

        /* Главный блок (на весь экран) */
        .hero {
            flex: 1;
            background: linear-gradient(135deg, #0d47a1, #2196f3);
            color: white;
            display: flex;
            align-items: center;
            justify-content: center;
            text-align: center;
            padding: 40px 20px;
            max-width: 100%;
        }

        .hero-content h1 {
            font-size: 3.5rem;
            line-height: 1.1;
            margin-bottom: 20px;
        }

        .hero-content p {
            font-size: 1.4rem;
            max-width: 700px;
            margin: 0 auto 30px;
            opacity: 0.95;
        }

        .btn {
            display: inline-block;
            background-color: var(--accent-color);
            color: white;
            padding: 16px 32px;
            border-radius: 6px;
            text-decoration: none;
            font-weight: bold;
            transition: background 0.3s;
        }

        .btn:hover {
            background-color: #e68900;
        }

        /* Секция каталога */
        .catalog-section {
            padding: 60px 20px;
            max-width: 1200px;
            margin: 0 auto;
            width: 100%;
        }

        .section-title {
            text-align: center;
            margin-bottom: 50px;
            font-size: 2.2rem;
            color: var(--primary-color);
        }

        .products-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(320px, 1fr));
            gap: 30px;
        }

        .product-card {
            background: white;
            padding: 30px;
            border-radius: 10px;
            box-shadow: 0 4px 12px rgba(0,0,0,0.08);
            transition: transform 0.3s, box-shadow 0.3s;
            display: flex;
            flex-direction: column;
        }

        .product-card:hover {
            transform: translateY(-5px);
            box-shadow: 0 8px 20px rgba(0,0,0,0.12);
        }

        .product-card h3 {
            margin-bottom: 15px;
            color: var(--primary-color);
        }

        .product-desc {
            color: #555;
            line-height: 1.6;
            margin-bottom: 25px;
            flex-grow: 1;
        }

        .price-row {
            display: flex;
            justify-content: space-between;
            align-items: center;
            border-top: 1px solid #eee;
            padding-top: 15px;
        }

        .price {
            font-weight: bold;
            font-size: 1.2rem;
            color: var(--primary-color);
        }

        .link-more {
            color: var(--accent-color);
            text-decoration: none;
            font-weight: 600;
        }

        /* Подвал */
        footer {
            background: #222;
            color: #ccc;
            padding: 20px;
            text-align: center;
            margin-top: auto;
        }

        @media (max-width: 768px) {
            .hero-content h1 { font-size: 2.5rem; }
            .nav-container { flex-direction: column; gap: 15px; }
        }
    </style>
</head>
<body>

    <!-- Шапка -->
    <header>
        <nav>
            <div class="nav-container">
                <a href="главная.html" class="logo">Водэко</a>
                <div class="menu">
                    <ul>
                        <li><a href="о_нас.html">О нас</a></li>
                        <li><a href="каталог.html">Каталог</a></li>
                        <li><a href="контакты.html">Контакты</a></li>
                    </ul>
                </div>
            </div>
        </nav>
    </header>

    <!-- Главный экран (на весь экран) -->
    <main class="hero">
        <div class="hero-content">
            <h1>Водэко:<br>Чистая вода — наша забота</h1>
            <p>Компания «Водэко» — российский производитель систем водоподготовки и очистки. Мы решаем задачи любой сложности: от бытовых фильтров до промышленных станций. Наш опыт, собственные разработки и контроль качества гарантируют результат на долгие годы.</p>
            <a href="каталог.html" class="btn">Смотреть каталог</a>
        </div>
    </main>

    <!-- Секция каталога -->
    <section class="catalog-section">
        <h2 class="section-title">Наши решения</h2>
        
        <div class="products-grid">
            <!-- Карточка 1 -->
            <article class="product-card">
                <h3>Станции водоподготовки АКВАФЛОУ</h3>
                <p class="product-desc">Модульные станции для хозяйственно-питьевого водоснабжения. Производительность от 1 до 500 м³/сутки. Полная автоматизация, блочно-модульное исполнение под ключ.</p>
                <div class="price-row">
                    <span class="price">От 1 200 000 ₽</span>
                    <a href="product-akvaflow.html" class="link-more">Подробнее →</a>
                </div>
            </article>

            <!-- Карточка 2 -->
            <article class="product-card">
                <h3>Установки обратного осмоса</h3>
                <p class="product-desc">Высокоэффективные системы обессоливания и глубокой очистки воды. Применяются в энергетике, фармацевтике и пищевой промышленности. Стабильный результат при любых исходных параметрах.</p>
                <div class="price-row">
                    <span class="price">По запросу</span>
                    <a href="product-osmosis.html" class="link-more">Подробнее →</a>
                </div>
            </article>

            <!-- Карточка 3 -->
            <article class="product-card">
                <h3>Фильтровальные установки</h3>
                <p class="product-desc">Автоматические фильтры обезжелезивания, сорбции и осветления. Удаляют железо, марганец, сероводород и механические примеси. Долговечные материалы и простая эксплуатация.</p>
                <div class="price-row">
                    <span class="price">От 450 000 ₽</span>
                    <a href="product-filters.html" class="link-more">Подробнее →</a>
                </div>
            </article>
        </div>
    </section>

    <!-- Подвал -->
    <footer>
        <p>&copy; 2024 Водэко. Все права защищены. Решения для чистой воды.</p>
    </footer>

</body>
</html>
