<!doctype html>
<html lang="ru">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title>FIT KIT Protein Cake</title>
  <style>
    * { box-sizing: border-box; }

    body {
      margin: 0;
      background: #f6f6f6;
      color: #171717;
      font: 15px Arial, sans-serif;
    }

    .breadcrumbs {
      padding: 15px max(calc((100% - 1170px) / 2), 20px);
      background: #e9e9e9;
      color: #777;
      font-size: 13px;
    }

    .page {
      max-width: 1170px;
      margin: 15px auto;
      padding: 0 10px;
    }

    .top {
      display: grid;
      grid-template-columns: 2.1fr 0.85fr;
      gap: 20px;
    }

    .product, .delivery, .variants-card {
      background: white;
    }

    .product {
      min-height: 400px;
      padding: 20px;
      display: grid;
      grid-template-columns: 45% 55%;
      gap: 25px;
    }

    .photo {
      display: flex;
      align-items: center;
      justify-content: center;
      min-height: 340px;
      cursor: zoom-in;
    }

    .photo img {
      width: 100%;
      max-width: 330px;
      height: 350px;
      object-fit: contain;
      transition: transform .2s;
    }

    .photo:hover img { transform: scale(1.03); }

    h1 { margin: 0 0 12px; font: bold 25px Georgia, serif; }
    .rating { color: #ffbd2e; margin-bottom: 42px; }
    .rating span { color: #555; font-size: 13px; }

    .info p { margin: 10px 0; }
    .info a { color: #7377d9; }

    .delivery {
      padding: 22px 20px;
      line-height: 1.55;
    }

    .delivery h3 { margin: 0 0 8px; font-size: 16px; }
    .delivery p { margin: 8px 0; }
    .delivery hr { border: 0; border-top: 1px solid #e5e5e5; margin: 18px 0; }

    .variants-card {
      margin-top: 44px;
      padding: 28px 30px;
    }

    .product-heading {
      display: flex;
      justify-content: space-between;
      margin-bottom: 18px;
      font-size: 20px;
      font-weight: bold;
    }

    .product-heading small {
      display: block;
      margin-top: 5px;
      color: #888;
      font-size: 15px;
      font-weight: normal;
    }

    .variant {
      display: grid;
      grid-template-columns: 1fr 50px 100px 130px;
      align-items: center;
      gap: 15px;
      padding: 14px;
      background: #f7f7f9;
      cursor: pointer;
      transition: background .2s, box-shadow .2s;
    }

    .variant:nth-child(even) { background: #f0f0f5; }
    .variant:hover, .variant.selected {
      background: #ececff;
      box-shadow: inset 3px 0 #7377d9;
    }

    .heart {
      border: 0;
      background: transparent;
      color: #7377d9;
      font-size: 22px;
      cursor: pointer;
    }

    .heart.active { color: #e44; }

    .counter {
      display: flex;
      align-items: center;
      justify-content: center;
      border: 1px solid #d4d5ec;
      border-radius: 18px;
      overflow: hidden;
      height: 32px;
    }

    .counter button {
      width: 30px;
      height: 32px;
      border: 0;
      background: white;
      color: #555;
      cursor: pointer;
    }

    .counter span {
      min-width: 30px;
      text-align: center;
    }

    .cart {
      border: 0;
      border-radius: 4px;
      padding: 9px 12px;
      background: #32aa4b;
      color: white;
      font-size: 14px;
      cursor: pointer;
    }

    .cart:hover { background: #278d3d; }

    .notice {
      position: fixed;
      right: 20px;
      bottom: 20px;
      padding: 14px 20px;
      background: #222;
      color: white;
      border-radius: 6px;
      opacity: 0;
      transform: translateY(10px);
      transition: .2s;
      pointer-events: none;
    }

    .notice.show { opacity: 1; transform: translateY(0); }

    @media (max-width: 760px) {
      .top { grid-template-columns: 1fr; }
      .product { grid-template-columns: 1fr; }
      .photo { min-height: 250px; }
      .photo img { height: 260px; }
      .rating { margin-bottom: 25px; }
      .variants-card { padding: 18px 12px; }
      .variant {
        grid-template-columns: 1fr 35px;
        gap: 8px;
      }
      .counter, .cart { grid-row: 2; }
    }
  </style>
</head>
<body>
  <div class="breadcrumbs">
    Главная  　/　Весь каталог　/　Спортивное питание　/　Батончики и питание
	  
  </div>

  <main class="page">
    <section class="top">
      <article class="product">
        <div class="photo" title="Нажмите, чтобы выбрать вкус"> <img src="bd60ae3083d0ee531fa05e3224948faa_12653_1000_1000_tr.jpg" width="750" height="1000" alt=""/>
        </div>

        <div class="info">
          <h1>FIT KIT Protein Cake 50 грамм</h1>
          <div class="rating">★★★★★ <span>8661 оценка</span></div>
          <p>Бренд　<a href="#">FIT KIT</a></p>
          <p>Категория　<a href="#">Батончики и питание</a></p>
          <p style="margin-top: 28px; color:#7377d9;">ⓘ　Описание и состав</p>
        </div>
      </article>

      <aside class="delivery">
        <h3>Доставка по России</h3>
        <p>Быстро и недорого</p>
        <hr>
        <h3>Курьерская доставка по Москве и МО</h3>
        <p>Сегодня либо на следующий день после подтверждения заказа.</p>
        <p>Ежедневно с 10:00 до 20:00</p>
        <hr>
        <h3>⌖　Самовывоз</h3>
        <p>Московская область, г. Люберцы, ул. Колхозная, д. 10</p>
      </aside>
    </section>

    <section class="variants-card">
      <div class="product-heading">
        <div>50 грамм<small id="selectedFlavor">FIT KIT Protein Cake 50 грамм</small></div>
        <div>110 ₽</div>
      </div>

      <div id="variants"></div>
    </section>
  </main>

  <div class="notice" id="notice">Добавлено в корзину</div>

  <script>
    const flavors = ["Тирамису", "Клубника", "Ромовая баба", "Двойной шоколад"];
    const variants = document.querySelector("#variants");
    const selectedFlavor = document.querySelector("#selectedFlavor");
    const notice = document.querySelector("#notice");

    flavors.forEach((flavor, index) => {
      const row = document.createElement("div");
      row.className = "variant" + (index === 0 ? " selected" : "");
      row.innerHTML = `
        <span>${flavor}</span>
        <button class="heart" aria-label="Добавить в избранное">♡</button>
        <div class="counter">
          <button class="minus" aria-label="Уменьшить">−</button>
          <span class="count">1</span>
          <button class="plus" aria-label="Увеличить">+</button>
        </div>
        <button class="cart">🛒 В корзину</button>
      `;

      row.addEventListener("click", event => {
        if (event.target.closest("button")) return;
        document.querySelectorAll(".variant").forEach(item => item.classList.remove("selected"));
        row.classList.add("selected");
        selectedFlavor.textContent = flavor;
      });

      row.querySelector(".minus").onclick = () => {
        const count = row.querySelector(".count");
        count.textContent = Math.max(1, Number(count.textContent) - 1);
      };

      row.querySelector(".plus").onclick = () => {
        const count = row.querySelector(".count");
        count.textContent = Number(count.textContent) + 1;
      };

      row.querySelector(".heart").onclick = event => {
        event.currentTarget.classList.toggle("active");
        event.currentTarget.textContent =
          event.currentTarget.classList.contains("active") ? "♥" : "♡";
      };

      row.querySelector(".cart").onclick = () => {
        notice.textContent = `${flavor} добавлен в корзину`;
        notice.classList.add("show");
        setTimeout(() => notice.classList.remove("show"), 1800);
      };

      variants.appendChild(row);
    });
  </script>
</body>
</html>
