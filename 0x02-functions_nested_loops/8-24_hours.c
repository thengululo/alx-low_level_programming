#include &quot;main.h&quot;
/**
* jack_bauer - func that prints every minute of the day of Jack Bauer, starti
* n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
* and resets mins
* Return: 0
*/
void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
int hours_remainder;
int mins_remainder;
while (hours &lt;= 23)
{
while (minutes &lt;= 59)
{
mins_remainder = minutes % 10;
hours_remainder = hours % 10;
_putchar(hours / 10 + &#39;0&#39;);
_putchar(hours_remainder + &#39;0&#39;);
_putchar(&#39;:&#39;);
_putchar(minutes / 10 + &#39;0&#39;);
_putchar(mins_remainder + &#39;0&#39;);
minutes++;
_putchar(&#39;\n&#39;);
}
hours++;
minutes= 0;
}
}
