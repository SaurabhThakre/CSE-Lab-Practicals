'use strict'

class Vehicle {
constructor(x,y,z){
this.x=x;
this.y=y;
this.z=z;
 }

fuelAmount() {
console.log("fuelAmount= "+this.x);
 }

capacity(){ 
console.log("capacity= "+this.y);
 }

applyBrakes(){
	console.log("applyBrakes= "+this.z); }
}

class Bus extends Vehicle {
	disp()
	{
		console.log("Bus Details");
	}
}
class Car extends Vehicle {
	disp1()
	{
		console.log("Car Details");
	}
}
class Truck extends Vehicle {
	disp2()
	{
		console.log("Truck Details");
	}
}

var t= new Truck(500,400,50);
var c=new Car(300,200,30);
var b=new Bus(400,300,40);

console.log("----------------------------------------");
t.disp2();
t.fuelAmount();
t.capacity();
t.applyBrakes();
console.log("----------------------------------------");
c.disp1();
c.fuelAmount();
c.capacity();
c.applyBrakes();
console.log("----------------------------------------");
b.disp();
b.fuelAmount();
b.capacity();
b.applyBrakes();
console.log("----------------------------------------");
