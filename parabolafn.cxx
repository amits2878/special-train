double parabola(double x, double p) 
          {return(x * x) / p; }

void graph(double a, double b, double incr,
   double f(double, double), double p, point gr[])
{
      double x = a;
      for (int i = 0; x <= b; ++i, x += incr)
         gr[i].set(x, f(x, p));
}

