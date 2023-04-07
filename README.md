# Ağaçtaki Kök değeri alt düğümlerin toplamı 
 Bu program, bir ağaç yapısını kullanarak bir kök düğümün altındaki sol ve sağ düğümlerin toplamını kontrol eder. 
 Yani, bir kök düğümünün sol ve sağ alt düğümlerinin toplamı kök düğümünün değerine eşit mi diye kontrol eder. 
 Eğer toplam kök düğümünün değerine eşitse, program "Kokun degeri alt dugumlerinin toplamina esittir." yazdırır. 
 Aksi takdirde, "Kokun degeri alt dugumlerinin toplamina esit degildir." yazdırır. 
 Program, dinamik bellek yönetimi kullanarak bellek ayırır ve işlem sonunda bu belleği serbest bırakır.
 
# Kod Nasıl Kullanılır
Bu programı kullanmak için, kodu bir C derleyicisinde çalıştırmalısınız. Derleyici, kodu makine diline çevirir ve programı çalıştırabilirsiniz.
Programı çalıştırdığınızda, öncelikle bir kök düğüm için bir değer girmeniz istenir. Daha sonra, sol ve sağ alt düğümler için değerler girmeniz istenir.
Program, sol ve sağ alt düğümlerin toplamını kök düğümünün değeriyle karşılaştırır ve sonuç olarak, "Kokun degeri alt dugumlerinin toplamina esittir." veya "Kokun degeri alt dugumlerinin toplamina esit degildir." çıktısı verir.
Program çalıştırıldıktan sonra, dinamik bellek yönetimi kullanıldığı için, programın sonunda bellek alanını serbest bırakmak için "free()" fonksiyonunu kullanmalısınız.
 
# Kodun Çalışma Şekli 
Bu kod, bir ağaç yapısının kullanılarak kök düğümünün alt düğümlerinin toplamının kök düğümü değerine eşit olup olmadığını kontrol ediyor.
Program, önce ağaç yapısının tanımlandığı bir yapı (struct) içeriyor. Bu yapı, her bir düğümün kendisini, sol alt düğümünü ve sağ alt düğümünü içeriyor.
Sonrasında, kök düğümünün alt düğümlerinin toplamını kontrol eden bir fonksiyon tanımlanıyor. Bu fonksiyon, eğer kök düğümü NULL (boş) ise, alt düğümleri olmadığı için toplamları da 0'dır ve doğrudan "true" döndürüyor. Eğer kök düğümü boş değilse, sol ve sağ alt düğümlerinin değerleri toplanarak bir toplam değişkenine atanıyor ve kök düğümünün değeri ile karşılaştırılıyor. Eğer kök düğümünün değeri alt düğümlerin toplamına eşitse "true" döndürülüyor, aksi halde "false" döndürülüyor.
Ana programda, önce bellekten kök düğümü, sol alt düğüm ve sağ alt düğüm için yer ayrılıyor (malloc() fonksiyonu ile). Daha sonra, kullanıcı tarafından kök düğümün, sol alt düğümün ve sağ alt düğümün değerleri alınıyor ve ilgili düğümlerin değerleri atanıyor.
Daha sonra, kök düğümünün alt düğümlerinin toplamı kontrol ediliyor ve sonuca göre bir çıktı yazdırılıyor. Son olarak, programda ayrılan bellek alanları serbest bırakılıyor (free() fonksiyonu ile) ve program sonlanıyor.





