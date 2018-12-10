---
layout: post
title:  "2ª Competição de Programação - 2018/2"
tags: [maratona de programação, inf, ufg, problemset, analise]
categories: analise
author: wellvolks
---
<style type='text/css'>
* {
    box-sizing: border-box;
}

body {
    margin: 0;
    font-family: Arial, Helvetica, sans-serif;
}

.header {
    text-align: center;
    padding: 32px;
}

.row {
    display: -ms-flexbox; /* IE 10 */
    display: flex;
    -ms-flex-wrap: wrap; /* IE 10 */
    flex-wrap: wrap;
    padding: 0 4px;
}

/* Create two equal columns that sits next to each other */
.column {
    -ms-flex: 50%; /* IE 10 */
    flex: 50%;
    padding: 0 4px;
}

.column img {
    margin-top: 8px;
    vertical-align: middle;
}

/* Style the buttons */
.btn {
    border: none;
    outline: none;
    padding: 15px 21px;
    background-color: #ddd;
    cursor: pointer;
    font-size: 18px;
}

.btn:hover {
    background-color: #b3b3b3;
}

.btn.active {
    background-color: #0099ff;
    color: white;
}





.btnn {
    border: none;
    outline: none;
    padding: 15px 21px;
    background-color: #ddd;
    cursor: pointer;
    font-size: 18px;
}

.btnn:hover {
    background-color: #b3b3b3;
}

.btnn.active {
    background-color: #0099ff;
    color: white;
}
</style>


Aconteceu em 06 de Outubro de 2018 a 2ª Competição de Programação - 2018/2. A participação na competição foi restringida aos alunos que ingresseram no curso nos anos de 2017 e 2018. O placar final da competição, geral ou por semestre/ano, pode ser observado abaixo:

<div class="header" id="myHeader">
  <h1>Placar Final</h1>
  <button class="btn active" onclick="one(0)">Geral</button>
  <button class="btn" onclick="one(1)">2017</button>
  <button class="btn" onclick="one(2)">2018</button>
  <button class="btn" onclick="one(3)">2017-1</button>
  <button class="btn" onclick="one(4)">2017-2</button>
  <button class="btn" onclick="one(5)">2018-1</button>
  <button class="btn" onclick="one(6)">2018-2</button>
</div>

<!-- Photo Grid -->
<div class="row"> 
  <div class="column">
    <img  id = "id_img" src="https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/all.png?raw=true" style="width:100%">
  </div>
</div>

<script>
// Get the elements with class="column"

// Declare a loop variable
var i;
var links = ['https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/all.png?raw=true', 'https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/m17.png?raw=true', 'https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/m18.png?raw=true', 'https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/m171.png?raw=true',
'https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/m172.png?raw=true',
'https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/m181.png?raw=true',
'https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/m182.png?raw=true'];

// Full-width images
function one(id) {
    document.getElementById("id_img").src = links[id];
}


// Add active class to the current button (highlight it)
var header = document.getElementById("myHeader");
var btns = header.getElementsByClassName("btn");
for (var i = 0; i < btns.length; i++) {
  btns[i].addEventListener("click", function() {
    var current = document.getElementsByClassName("active");
    current[0].className = current[0].className.replace(" active", "");
    this.className += " active";
  });
}
</script>

<br>

Para os(as) alunos(as) que desejam resolver os problemas, um replay da competição está disponível no [HackerRank](https://www.hackerrank.com/2-competicao-de-programacao-infufg-20182).

Parabéns à todos(as) que participaram. Vocês são tdos vencedores! Como o placar da competição foi dividido de acordo com o ano de ingresso (2017 e 2018), o primeiro colocado de cada ano (vide abaixo) foi premiado com um MI BAND 2.
  
<p align="justify">
  <b>2017</b>  <span style="color:blue">Joao Batista de Oliveira Netto</span>
</p>
<p align="justify">
  <b>2018</b>   <span style="color:blue">Felipe Aguiar Costa</span>
</p>

Todos os participantes ganharam, além de brindes, uma camisa com o mascote (Monkey) do INF na Maratona de Programação.

<div class="header" id="myHeader2">
  <button class="btnn active" onclick="two(0)">Foto 1</button>
  <button class="btnn" onclick="two(1)">Foto 2</button>
  <button class="btnn" onclick="two(2)">Foto 3</button>
  <button class="btnn" onclick="two(3)">Foto 4</button>
  <button class="btnn" onclick="two(4)">Foto 5</button>
  <button class="btnn" onclick="two(5)">Foto 6</button>
  <button class="btnn" onclick="two(6)">Foto 7</button>
    <button class="btnn" onclick="two(7)">Foto 8</button>
    <button class="btnn" onclick="two(8)">Foto 9</button>
    <button class="btnn" onclick="two(9)">Foto 10</button>
</div>

<div class="row" align="center">
<div class="column">
    <img id = "id_fig" src="https://lh3.googleusercontent.com/T5_mr9oqvA9v8Ofz3WCYWguDkj28gdJFLJwDvVPNcoME-tdIDUm9MBr2GdFiVH8OgCa70DtUzdGNQLv4XVkn2TdfAqDsWnRbLtV27mMoSa8gNY-sBGVjWdgk9-_5CTQ_G-Qro82PbT6vWDQg4igNb37yVTlEpliKTva_9OzQpBbSEKg1gF7IY-P1V9sP6RZPFNiQPBKinuE9e5nfQdjyZPgMxS66xg1cW4ImUibaQgCj-EdAVtF27N_rE15kp---DXOkUERKzRyvSiZtXAjPx72iAVUfjyYpzPKC-c7H2T_QJ-rHx27jdWrO-jvc-EX0ralpz04oW5ViaDzbMHJW99jbCVIQnHx4UyvF8nNcTTS2lWm0TZZLGyqrsBF3DDWJLUX4MvbWWCErUoX5-68N_2iMwHPZNDvIQmCFOxrhCHmaJ29KtoTbw2lezLRticDhwydy0PjVbod518njyUCDgNNGttnf-vRh6QRacdWNnrxG55nZQgLAa-WSVt2Dt0HWDvBKnVjsEmrGArOnejXYNm0dFenZsEVmuatru1rJDHkxf032lokSRBinIP2cqqaUdamwI9gN9oHAlu044HX_eMNGgDnMgg9mLCh1WClYXKVthslcsGhrvZXAkw4io2GUWhx368NMwsaV8yD7oTqYjLYYiKCRoF3j5HnjUsVPr33h-D_V9R3RFcXSrERVUPvHWBdFhwU7oL8ukrvGoUQ=w1242-h931-no" style="width:65%">
  </div>
</div>


<script>
var elements = document.getElementsByClassName("column");
var links2 = ['https://lh3.googleusercontent.com/T5_mr9oqvA9v8Ofz3WCYWguDkj28gdJFLJwDvVPNcoME-tdIDUm9MBr2GdFiVH8OgCa70DtUzdGNQLv4XVkn2TdfAqDsWnRbLtV27mMoSa8gNY-sBGVjWdgk9-_5CTQ_G-Qro82PbT6vWDQg4igNb37yVTlEpliKTva_9OzQpBbSEKg1gF7IY-P1V9sP6RZPFNiQPBKinuE9e5nfQdjyZPgMxS66xg1cW4ImUibaQgCj-EdAVtF27N_rE15kp---DXOkUERKzRyvSiZtXAjPx72iAVUfjyYpzPKC-c7H2T_QJ-rHx27jdWrO-jvc-EX0ralpz04oW5ViaDzbMHJW99jbCVIQnHx4UyvF8nNcTTS2lWm0TZZLGyqrsBF3DDWJLUX4MvbWWCErUoX5-68N_2iMwHPZNDvIQmCFOxrhCHmaJ29KtoTbw2lezLRticDhwydy0PjVbod518njyUCDgNNGttnf-vRh6QRacdWNnrxG55nZQgLAa-WSVt2Dt0HWDvBKnVjsEmrGArOnejXYNm0dFenZsEVmuatru1rJDHkxf032lokSRBinIP2cqqaUdamwI9gN9oHAlu044HX_eMNGgDnMgg9mLCh1WClYXKVthslcsGhrvZXAkw4io2GUWhx368NMwsaV8yD7oTqYjLYYiKCRoF3j5HnjUsVPr33h-D_V9R3RFcXSrERVUPvHWBdFhwU7oL8ukrvGoUQ=w1242-h931-no',
    'https://lh3.googleusercontent.com/bBzb3TJbH9Wg5MGY_QSNlQunh_8iHUm-RsAvl_oGSKx2ejtTdxBzhKX7Ljicip_hI6XvYYYGC8Nq9ZamyHlKLIepDWkOLUX-Q1Y6PSd8ASqbtj9rgN1gJgZ-v8pQZ2gG8Zba1OvzBJ0YXOjaB5KXktyTG_cm9qMoCmejk1fpmUD1n0ZdekJoY_CP-cXAfVzx0_7QuhhIV4tZGaC19kFYsUubjF6F8BKRoUXUl7FIOOUDOd8JbPWeW4h_2yqQJTRkADnlJ9NyoY7UWR2dZ-yTGrKvFxMZIHeOyJ5OWt2uQupx86Kf7rRwzPsrWDzjZJdOBLQw26Pshg6fvi5Y0mtCLjf-GnMLqZTZgLV1EHj8d2p4QDq0zNkxiEst4--mTgQX6JdXLzjkuhBdcYafr0JvkanBfL9h9hSp3Son-e60wymWgkFw2eMz6wafCg3cufBsZcPi5zQM3ZPywcMiOQCwA87dqUt0FcpUxLS0CQRQHG-hmbZnUfgHZWQKsHTWwneSdNfo3pqz5Skn1IJLeII3YpUYCsrtSc9AA2iUHHJ_XLT1bqc5UjVuQhG8iu_NjzP-95J0Hi0oicupZzxQ-iAA1E7-DfBEpOdkrA1Cz7j0FFur49UUHQLb8PSlVMAUcAydmBVZqAR0gWaYT2tu8xkLDH2xDuEM4CWVD2yumtdDdttzQE9oR747QpFMrC4vM2b4Xxc_KpJwsHMkS-Ut4lE=w1307-h980-no',
    'https://lh3.googleusercontent.com/2ARcYeOeMheFCynE5LolBnSXS4jrNPNZX-Sy1BCBipAa4Q2m1wF8uZklBgGWSzLMulYSgYiHxsr7Uvy4Xg23csiS4F4bSbGwh8HfsOgnuSSFGgFc6mVxTb7whAwCNW5BNSO0LPlI99eJLC5_YCbLGwv-KsIAR8MbvbhtEAmDKU7cmSXHEK9pNwmnfsW5r3tzOL3t6sWv92-5uLgB65130wOaT3RVsH4bfkWERGJ5jADV3-JF-mOovW6cceZ2AldGZAPHd4QWYMlec636WazYRkBhPj2U-Sg-ikFHiRwTojJsJ1kvrnSb1cxGYKLLXiUgZIttwOrHZdensnR-M3Y2TKbrKsSrZfG4ZPqmqUZG2w7roYXk7Hh-_91C0R7bBi7ZxjgF1RRozLk5BlJW_30vpiNdzSOxKnVcBXxwh5MhSi1swFxHc0EMLB__3Il9nIXJ9hygjpfcKpZJJl0EcrhOxyPIQwPaH-JmU8T4UoI66FLnFlaM_07ix1ynZZoqfeH-G9zo3UuM0AP2vDSAYydX6c1YfAdg1ZDIAfEaitn0ca8vdW6x0Ey7fBQWZStR660ltAQQgU0_TsnYOfZxLvGcqF85PWnbeqHorrmHkdCIgxPO6OqVDl04FxXsDFnNi7bDgwnfzgvBGhPUNyVR9sngyLX_RjNaGdqWSkG9_mgecMIQUNq9kctRUOKNvbaPkHtIOsUaZfF5wWlaWurT1MQ=w1307-h980-no',
    'https://lh3.googleusercontent.com/wh9qHA-f5vUEiE717lzb0YW_UWoaNOqBg5kag704GckyiipQ52OTxuJQW2PoMM1qeP4B-qixcQe6p-ZI_2YMmpwvzUuVSav-p2-tbcpC1wyOcHqlMS6yraFJpIPIEW8d19q3SOCYPtMceKqSXdtDdGwFoFNoCZVZQ4o0g_1GKBFigiHjoDOZvu4yGaq0CwJMKjsPmmabOIXiZ7h7tFc-ugAvM2Bm5eoQhy2OA37wpVry56lX7Vh62AY4Dq8BqGzCmIKtCx03ovTMNK4EGKCu7sdUGMy1LjHuMiwg5f8OWr-HeuW5fB0NMvwToSfXKaxb8UJDzN0DQMxxJQLRxrmVc0RwMRgfTUjH5wBMuxk2hUB7ONdYA59s8563lmj8Ec1Ii_idaqk8X7uxOr951JFo9vtE4pVbKy5Y5d3NAz7qAbcaIfFZch-bMl3wgLmvZqdhD0MgZI9kKchHRpjgl7crgrZ3kaq_6tUwVOFZqhEEX9dwhdfd6sqHwiUVa-Nodz1SQDH8qRzNzvV6YykzdzxBt-gBHoFD6leFRm9ib5Xhf1elEaRZjFlkXvQJksMIU604TyzEpjcNHDzJIHEkklNrFw-z2zTx-exdDzjaRcbQ6qZ695IHJMHS8D_sCMtg-0EKB2v7NpDbD_O2M4k2qtrWLiFOkMzqn4DPe2eL-wDc2THNlc5QI-kZbt54PknrBUDqjj1RHUatCTlMW7HtXuU=w1242-h931-no',
    'https://lh3.googleusercontent.com/9jtTFl9tVIYgwKlaNX5pCq2bGXnAO-iyGshICc9inpzh_FefE4TGWjtGS6Zsa6io4mTO_QC7rlacbJGdlxdbTZ4hv8mQ7tN1liQi5bG2vSbcNc81bG4YpagVZozdiq99We_3qDwoi0i-KsxndC3X4uyJ-3YGWUntekdHU-zReptxxiS2OuyC-r3tTw6wjNpcTPopyy6svJ-dJ06-LR7jPpQ87qkfFS8W7Pxbk8RqCCq2mV8awWFxolPoYbHOZOk30bKOC5Od5AldaD3s43BMmuB6Oanz7Uv-QbcMJk7KiGWmzHmbHvw-HdysUKHojciWvGuoxA0wli2dSmeeMArjruxkSO1ltUNTyFe2z5SjH8iy6Xk7REeBBUSh2iUUcVFZhNdabGdybjliLwIBLk7UeWEdMwytBNH2C4aRX_qlNAW1gT_TQE1jH6m6xiTvJuiRJbNAzdAts3jgt79VLaPBGaSsmVHJVCJSgKLhQLJxX0buLKw2_lI-t7J9KL8qzVtGT7mNwOR8s2Gj4DE-xM11MGLQE5zN2LUleWEJT1WMbVmAHWCrUfURxZLDO8qMHatZQJ5o-dWL_3lr8TXExmlAU2nIdluc9F7_536fF2eH1M1jvWt3_ngzYTph6uQYK4FjdzE5p9nRlzvxhSjF9sAtRnP9OLi1NcumGQVBdZjLqT6cth2-4GiAwr3FUhqnJx8uYeM8IOvEbMiGaTf2jSQ=w1242-h931-no',
    'https://lh3.googleusercontent.com/v3XhY-nJNRT9EpUfd2FrWlX9jOVmy2VbBusM7gN25A_9Pvrr0OzUs2kb3W2uSWaCMwQAPqy1TDC8yKT-BPg6lydVDqbRggtZUHfbycx2X_aF0Od_U7cI1qCEtCL5G282t2tgkPICCu1b_w3B2OKAEvkMWG9DsPaaMIUYu2PUhrd2Dv01pLNkOgJU1YABz1KMDzmlnATViCU6hCJg5v7eEKVBTXdqhNHRzm3-xXiPGeE6F55pY_XEHonl6l7FWzTUtn8tKL6YyJlB5UvH364osZz5Diolq1Odm07RjXw2hniRk8A5JTzFz-sfW1Lb5bivLmMvjDDertuqNK1KE_5DNIO1I76m0RI5nggJf4UagloUFRenkoud8bl4-gTzZjQZKmOYc8fmXTTrh3e5WbxB11977bcqvN0S1WxA6bZxLJW8xfpY8aYWOYneeRcKI2r7SC6y08lpL7OlPR4JT_rCx4suCF2u8UmuNsl2hnuAdLrXuFtel9LDwJAQ_E504AZiaG-hi0-BZbzJ3iOqusa2RaGTF_3CHfIPbpTRs-iZi2flm8mZvddW7_TU2_ptOZwEgLtVjr_NYXOuRmQTmS_Yvg-c08cFtTyRcZHqvrxDS34ZSndeyVlSm0yCFQr18ryIxBA45DGEz7LZv-ClydvocurvwGDM9W3NeyjLmaZas9XWbjO1cT76TYV3GMegHH4ipJ9Tj6vuVpOquEmH9tc=w1242-h931-no',
 'https://lh3.googleusercontent.com/Gvl9aBQOgRQUI6iIw7poRpOas6RCTvgN89vQfUAqS4M9vl022kh8So_pghNX9F3AZUsnOb6nEGyeVXbNiX2Dh1Z6EkOGzKyjTJ84OFfvpoU25Y6p6ZfIjJAY6qlioAct1e6x4_a9brdZBcrNkH0eliY0bZa2N5AoQqzzYmPYfHSnKaErIdY6NXGsqpZj915VLnZAPBy3pB3eLy5YUP2k68_lgJQeA7M1JL38tZQFOHcbc4eeSi97FhtUN5m4klSBFok1Hyukq7jnoZigIsywh8uPx-Fr7D-4rPVfYnJBHDj_FTR6KyZKj6VfjNIaU_jJDSgrR4hEVD62WQ735HtYayZ3bbRnFpXreDd-0kWBX3-Z_uO2_OwGlR3m8iVwOQEKheM2pYsfygG4DPRBmjY3XXC8ym67CpO0U94OdhSohMlRhw0an1rg8SA4mgsUJJt3FvgcAY_VVxFuqORR54tS7wf0Gar2oj6YTBfOtmJkDExZ8eUhKSDoevsZLdk-g-t5z8gplNX6HSOnfnI0ypF1QQHgKC7jUGE-En2l8dHTFfhYaJU2aVHSJVA9-iK6C346SwNycBlghU4bmGtNs4C2X5rrcfzR_I4ZNTAHHjBRMW-zor9i9gsozfcBARicCkNql0xkTGioQvBTjh_JmST3KVX8A9owPuPlxQOU0DG1CAiWV-hzSbueyPDsTWkQITsjuaKl2wDMvbKa7xr8kzg=w1242-h931-no',
   'https://lh3.googleusercontent.com/EWVh0J-41OxM3nuR13_EntQHHC1ht8l9eekxIEWXkuypcVcAfX43WVyxJBdYrSrr5rxJGHaLQi1gAnViDi1uP0F3aqb7eW0mvnw3U_tjcJs8ecBKbGrLySqHKfUvnU59F2WG2HB1TYXkJ3M-hlwBXt_D-zvaXJ3EeQagVCRPfAAJCg_D7o3X6f-x4Y9Xl7sVbxMANaKNm1m9UiMRURdXdeSs9o8_Ri2A3Cslf1ms7_KdZm-lQwfQas_GECeveebYr-T_xDko3vf7XOiGg28rRAgtBabYNWKWh9zEHVNQdOVHQZAN-CDaaAoMYtl0c1bR8TOyQ5CBbnEAU6vJKvrAqgkCyuLq_SmQUqMl8cP8VwMeR8Z2pbwzf2SWUVTHA6CCaivHvJjBZZTf0ySZqnaWt9HixzS8FTuAlSD72uvZEEw5hPXdZQB_93nvG7bJAabjPWbrX29lrt8si3VuzkRRvFxO59KFnKWbVFvaxz0EtGMxXacV5EiZiQnqHtRuwimHnjJwxpXLdmLu6AtF0B16kHP86fY-cXLdRWdnW5QkDN4XQgs_5KK04LFpAVdC0GplpXLsfRm0Pid9xXixBS-CzGj1mdSzVWi6SVuO9ZrTHUVM8LYyQcIILdzVbVXAbPO4FpCmMPtaLDsoBvisYQgcI8UEo2ayDwR7xZrIcA4YnicD5Be_Imi0FZMKGHugILdHssTyt9XvdXa6O6amG7Q=w1242-h931-no',
 'https://lh3.googleusercontent.com/sBtkyzjnbwQTpcg2mXMUCqFZtZhc1OkSr6fwSELNDAXvQUbu5FN_5Uqo1m126YEVVaqDXORmJvtKKQJy7sA6Thb9baxjxI9vx7v58o6fALN4nY2bYnN-MdGrbs-l7T2DL7eoNj9u6CT7OVVrQMGgjui-N2rcQg-fPNfxLc19w7VrMURdKvqCQTSVOoyXE4AcGYFaYaWlSfnCCuIm8ny1NYMsGsqpxebznOtGua6GX5eeiJq9ixRgiBGOvf86iJuveYeKNSz2J4MZQ3dfrnnXdfPuZ0zdCJquNhS6qihuKDrDj8q2bR6uOXS2iMwnMwBDnC5ooWG9atGnIGTPmSMqSamxCGZf_UdThIfluq_NpMjYcux3zOEDKOoo2GH6nN5zqmE6OIktBRvXmKaIkG7IZadIDWQ8IO3b2hvJBMquGeFxeChgPiacbRZtab_fRdlXAxYNU5nQ9fYs0-_MBbLrIrTNq4NdjVOnEJCYdc7HccpbLBM96Mhmb-gnVl_wGohQPQNo-Y3YhLhXbIClKBU-H7L3X_5XmQJWnL_W_rc2xVOcYkqbZFJp1XCF2udB8YAf-0ot3NSAEcBcy5tOMFnQ5Eb2ey3F98NQFsf1_gB91H-Yab9GaUOTPoaOkOJJe5-vj9YcUHLinPj_T8KnA6YTRC6joI_pEk2tcokawnJbc54FfxJIfdyaieyxTjrRpy2dM3JsbeFcl_lEyfW_cYY=w1242-h931-no',
        'https://lh3.googleusercontent.com/uiygJb4f-wc2iF26najUKYDfGMLNAaSsqC01-bzFtPZ78yWZpybJS6qSZKu0taw2D_5JiIr1GKlKLaneSfmyHIN0Eatx_DeXd48m9UrlR7VNIVVUo2RfRwYBsmsHZzMB4vorV5JCh3urAq5JzMV_5ZzMnQj1mfjDKb3H-og07H0K2X99ciVKAqPtSMNO1-LRs6WTmCXfcYYw-hJR7KYxtU0cy5l9tU75mQFATORifH1A77vB8L21qNXpju5-cqyFtPAQm8TidpOzD-uIKOvBgZ8_Ict22CdPCCLvjACM1LKQIp3UDTKpenzhfef-4yVInw5TDffD-Vo69rIvkMyeDun0_ohf6p1I6Y_e97p593s6gA98V5CrWKgCcJfnP1YvSA9sb-rb2CRaLRUnusl8-8PMUyC16ghEQJyvlE4DJezDwoCphMyWrxN_3uhbzgXxPPnSkFB3TwpaZUJcHFkelMfrMRAIcTQLGWrGD0a7e2-3jhcLyvTjhCW0g1EHPxKQXbFPhQIleaG6iWhHfUxb5lEVaIX-EriVX_x2HCaldXVFOQRo69OV30-WAKgQGpEYZ6N0dEWGWKnoV6D2u72ydcQ-7wMpHPzeGPXEfwndNJnlKOhVTDWfxXin9oPTbDDBGW8yoRa7yMNP4rwlhlq7nNeXJJUh2ikYt3-tODv9ME7Gq4V3i6HZvJt19jnL2NvHabHUB9kqlmSz9Q2zTEM=w1242-h931-no'];
    
function two(id) {
    document.getElementById("id_fig").src = links2[id];
}

// Add active class to the current button (highlight it)
var header = document.getElementById("myHeader2");
var btns = header.getElementsByClassName("btnn");
for (var i = 0; i < btns.length; i++) {
  btns[i].addEventListener("click", function() {
    var current = document.getElementsByClassName("active");
    current[0].className = current[0].className.replace(" active", "");
    this.className += " active";
  });
}
</script>

<br>

A prova foi composta por 9 problemas. Os níveis dos problemas e as respectivas técnicas que podem ser usadas para resolvê-los são apresentados na tabela abaixo:


| Problema                                            | Dificuldade   | Técnica relacionada      |
|:----------------------------------------------------|:-------------:|-------------------------:|
|A - <a href="#desafio">Desafio</a>                        | Difícil         | Ad hoc + XOR                   |
|B - <a href="#forro">Forró no cafundó</a>                | Fácil         | Matemática                   |
|C - <a href="#obras">Obras</a>                   | Médio         | Guloso                   |
|D - <a href="#tap">Problemas do TAP</a>                      | Médio         | Ad hoc + Matriz              |
|E - <a href="#brincando">Brincando com múltiplos</a>            | Difícil         | Princípio da inclusão-exclusão    |
|F - <a href="#escadas">Escadas</a>                    | Médio         | Programação Dinâmica            |
|G - <a href="#campeonato">Campeonato de arco e flecha</a>  | Difícil         | Busca binária          |
|H - <a href="#terrenos">Terrenos</a>                  | Médio         | Matemática                   |
|I - <a href="#espiral">Matriz espiral</a>                  | Fácil         | Implementação                   |
|=====


As explicações dos problemas seguem abaixo:<br>
{% include analises/2aCompeticaoInf/desafio.md %} <br>
{% include analises/2aCompeticaoInf/forro.md %} <br>
{% include analises/2aCompeticaoInf/obras.md %} <br>
{% include analises/2aCompeticaoInf/tap.md %} <br>
{% include analises/2aCompeticaoInf/brincando.md %} <br>
{% include analises/2aCompeticaoInf/escadas.md %} <br>
{% include analises/2aCompeticaoInf/campeonato.md %} <br>
{% include analises/2aCompeticaoInf/terrenos.md %} <br>
{% include analises/2aCompeticaoInf/espiral.md %}
