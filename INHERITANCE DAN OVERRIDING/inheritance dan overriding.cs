using System;

namespace inheritanceoverriding
{
    class HitungBangunDatar
    {
        public virtual void luas()
        {
            Console.WriteLine("Hitung Luas Bangun Datar");
        }
        public virtual void keliling()
        {
            Console.WriteLine("Hitung Keliling Bangun Datar");
        }
    }

    //Inheritace
    class InheritanceBangunDatar : HitungBangunDatar { }

    //Override
    class Persegi : HitungBangunDatar
    {
        public override void luas()
        {
            Console.WriteLine("Hitung Luas Persegi");
        }
        public override void keliling()
        {
            Console.WriteLine("Hitung keliling Persegi");
        }
    }

    public class Program
    {
        static void Main(String[] args)
        {
            Console.WriteLine("Output Inheritance :");
            InheritanceBangunDatar inheritance = new InheritanceBangunDatar();
            inheritance.luas();
            inheritance.keliling();

            Console.WriteLine("\nOutput Override :");
            Persegi persegi = new Persegi();
            persegi.luas();
            persegi.keliling();
        }
    }
}