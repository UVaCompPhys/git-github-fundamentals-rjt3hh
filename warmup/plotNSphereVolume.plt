clear
reset
unset key
set style textbox opaque margins 0.5, 0.5 fc bgnd noborder linewidth 1.0
set lmargin screen 0.12
set rmargin screen 0.83
unset parametric

set view map scale 1

set xrange [1:2]
set yrange [0:50]
set xlabel "Radius"
set ylabel "Number of dimensions"
set title "Volume of N-sphere"

set contour base
set cntrlabel format '%8.3g' font ',7' start 5 interval -1
set cntrparam levels 20
unset surface
set cblabel "log10(Volume)"

set palette rgb 7,5,15
load 'cmap.gp'
splot "volume.dat" using ($1):($2):($3) with lines,\
"volume.dat" using ($1):($2):($3) with labels boxed

set term pdf size 4,3
set output "nSphereVolume.pdf"
replot
unset output
set term x11






