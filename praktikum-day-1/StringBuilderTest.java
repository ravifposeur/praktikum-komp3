class StringBuilderTest {
    public static void main(String[] args) {
        StringBuilder sbAwal = new StringBuilder("Java");
        StringBuilder sbModifikasi = sbAwal; // Menyalin referensi ke objek yang sama

        // Melakukan modifikasi pada sbModifikasi
        sbModifikasi.append(" Programming");

        System.out.println("Mutable Test:");
        System.out.println("sbAwal       : " + sbAwal.toString());       // Juga "Java Programming"
        System.out.println("sbModifikasi: " + sbModifikasi.toString()); // Tetap menunjuk ke objek yang sama
    }
}
