class StringImmutableTest {
    public static void main(String[] args) {
        String teksAwal = "Java";
        String teksModifikasi = teksAwal; // Menyalin referensi awal

        // Melakukan modifikasi pada teksModifikasi
        teksModifikasi += " Programming";

        System.out.println("Immutable Test:");
        System.out.println("teksAwal       : " + teksAwal);       // Tetap "Java"
        System.out.println("teksModifikasi: " + teksModifikasi); // Menjadi "Java Programming"
    }
}
