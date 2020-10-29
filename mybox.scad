 translate([90, 0, 15])
    difference() {
        cube([59,74,30], true);
        translate([0,0,3])
            cube([55,70,29],true);
        translate([-11.5,37,15])
            cube([13, 10, 16], true);
        translate([18.375, 37, 15])
            cube([10, 10, 14], true);
        translate([12.5,-20,-12])
            cylinder(9, 8, 9, true);
        translate([-12.5,-20,-12])
            cylinder(9, 3, 3, true);
        translate([-4.5,-20,-12])
            cylinder(9, 3, 3, true);
        translate([-20.5,-20,-12])
            cylinder(9, 3, 3, true);
        
        
    }

translate([0, 0, 2])
    difference(){
        union(){
            cube([59,74,4], true);
            translate([26.5, 0, 7])
                cube([2,70,12], true);
            translate([-26.5, 0, 7])
                cube([2,70,12], true);
            translate([0, 34, 7])
                cube([55,2,12], true);
            translate([0, -34, 7])
                cube([55,2,12], true);
        }
        translate([11.5,37,15])
            cube([13, 10, 18], true);
        translate([-18.375, 37, 15])
            cube([10, 10, 16], true);
    }