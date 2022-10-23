#include<stdio.h>
#include<string.h>
#include<math.h>
#define phi 3.14

float cosinus(float number){
	return (cos(number*(phi/180)));
}

float sinus(float number){
	return (sin(number*(phi/180)));
}

float tangen(float number){
	return (tan(number*(phi/180)));
}

float squareRoot(float number){
	return (sqrt(number));
}

float cubicRoot(float number){
	return (cbrt(number));
}

int main(void)
{
    char UI[255];
    FILE *font;

    if((font = fopen("calculatorFont.txt","r")) == NULL)
	{
        printf("Error: File tidak ada!");
    }

    while(fgets(UI, sizeof(UI), font))
	{
        printf("%s", UI);
    }
    
    fclose(font);
    
    char statement[10];
    	
	do{
		puts("===========================================================================================");
		puts("CHOOSE THE CALCULATOR TYPE (1/2/3/4)");
		puts("1. Arithmetic Calculator");
		puts("2. Two Dimensional Figure Calculator");
		puts("3. Surface 3D Area Calculator");
		puts("4. Trigonometry and Root Operation Calculator");
		puts("===========================================================================================");
		
		int tcNumber;
		int calculatorType;
		scanf("%d", &calculatorType);
				
		if(calculatorType == 1)
		{
			float number1, number2;
			int operatorSign;
					
			puts("===========================================================================================");
			puts("How Many Operations You Want to Calculate ? : ");
			puts("===========================================================================================");
			
			scanf("%d", &tcNumber);
						
			for(int i = 1; i <= tcNumber; i++)
			{
				puts("===========================================================================================");
				puts("Enter The Two Numbers : (Example : 1 2)");
				puts("===========================================================================================");
				
				scanf("%f %f", &number1, &number2);
						
				puts("===========================================================================================");
				puts("CHOOSE THE OPERATOR (1/2/3/4)");
				puts("1. Addition");
				puts("2. Subtraction");
				puts("3. Multiplication");
				puts("4. Division");
				puts("===========================================================================================");
				
				scanf("%d", &operatorSign);
					 	
				float sum, difference, multiple, division;
						
				switch(operatorSign)
				{
					case 1:
						sum = number1 + number2;
						printf("%.2f + %.2f = %.2f\n", number1, number2, sum);
						break;
					case 2:
						difference = number1 - number2;
						printf("%.2f - %.2f = %.2f\n", number1, number2, difference);
						break;
					case 3:
						multiple = number1 * number2;
						printf("%.2f x %.2f = %.2f\n", number1, number2, multiple);
						break;
					case 4:
						division = number1 / number2;
						printf("%.2f / %.2f = %.2f\n", number1, number2, division);
						break;
					default:
						puts("Your Operator is not Invalid!");		
				}
			}
		}
		
		else if(calculatorType == 2)
		{
			int twodimensionalFigure;
					
			puts("===========================================================================================");
			puts("How Many Operations You Want to Calculate : ");
			puts("===========================================================================================");
			
			scanf("%d", &tcNumber);
						
			for(int i = 1; i <= tcNumber; i++)
			{		
				puts("===========================================================================================");
				puts("CHOOSE THE TWO DIMENSIONAL FIGURE (1/2/3/4/5/6/7)");
				puts("1. Triangle");
				puts("2. Circle");
				puts("3. Square");
				puts("4. Rectangle");
				puts("5. Parallelogram");
				puts("6. Isosceles Trapezoid");
				puts("7. Rhombus");
				puts("8. Kite");
				puts("===========================================================================================");
				
				scanf("%d", &twodimensionalFigure);
						
				float triangleArea, trianglePerimeter; 
				float circleArea, circlePerimeter;
				float squareArea, squarePerimeter;
				float rectangleArea, rectanglePerimeter;
				float parallelogramArea, parallelogramPerimeter;
				float trapezoidArea, trapezoidPerimeter;
				float rhombusArea, rhombusPerimeter;
				float kiteArea, kitePerimeter;
						
				switch(twodimensionalFigure)
				{
					case 1:
						puts("===========================================================================================");
						puts("CHOOSE THE CATEGORIES");
						puts("1. Triangle Area");
						puts("2. Triangle Perimeter");
						puts("===========================================================================================");
						
						int triangle;
						scanf("%d", &triangle);
						
						if(triangle == 1)
						{
							float base, height;
							
							printf("Input Base : ");
							scanf("%f", &base);
							printf("Input Height : ");
							scanf("%f", &height);
							
							triangleArea = (base * height) / 2;
							printf("The Triangle Area is %.2f\n", triangleArea);
						}
						else if(triangle == 2)
						{
							float sideA, sideB, sideC;
							
							printf("Input side A : ");
							scanf("%f", &sideA);
							printf("Input side B : ");
							scanf("%f", &sideB);
							printf("Input side C : ");
							scanf("%f", &sideC);
							
							trianglePerimeter = sideA + sideB + sideC;
							printf("The Triangle Perimeter is %.2f\n", trianglePerimeter);
						}
						break;
					case 2:
						puts("===========================================================================================");
						puts("CHOOSE THE CATEGORIES");
						puts("1. Circle Area");
						puts("2. Circle Perimeter");
						puts("===========================================================================================");
						
						int circle;
						float r;
						scanf("%d", &circle);
						
						if(circle == 1)
						{
							printf("Input r : ");
							scanf("%f", &r);

							circleArea = phi * r * r;
							printf("The Circle Area is : %.2f\n", circleArea);
						}
						else if(circle == 2)
						{
							puts("Input r :");
							scanf("%f", &r);
							
							circlePerimeter = 2 * phi * r;
							printf("The Circle Perimeter is : %.2f\n", circlePerimeter);
						}
						break;
					case 3:
						puts("===========================================================================================");
						puts("CHOOSE THE CATEGORIES");
						puts("1. Square Area");
						puts("2. Square Perimeter");
						puts("===========================================================================================");
						
						int square;
						float side;
						scanf("%d", &square);
						
						if(square == 1)
						{
							printf("Input Side : ");
							scanf("%f", &side);
							
							squareArea = side * side;
							printf("The Square Area is %.2f\n", squareArea);
						}
						else if(square == 2)
						{
							printf("Input Side : ");
							scanf("%f", &side);

							squarePerimeter = 4 * side;
							printf("The Square Perimeter is %.2f\n", squarePerimeter);
						}
						break;
					case 4:
						puts("===========================================================================================");
						puts("CHOOSE THE CATEGORIES");
						puts("1. Rectangle Area");
						puts("2. Rectangle Perimeter");
						puts("===========================================================================================");
						
						int rectangle;
						float length, width;
						scanf("%d", &rectangle);
						
						if(rectangle == 1)
						{
							printf("Input Length : ");
							scanf("%f", &length);
							printf("Input Width : ");
							scanf("%f", &width);
							
							rectangleArea = length * width;
							printf("The Rectangle Area is %.2f\n", rectangleArea);
						}
						else if(rectangle == 2)
						{
							printf("Input Length : ");
							scanf("%f", &length);
							printf("Input Width : ");
							scanf("%f", &width);
							
							rectanglePerimeter = 2 * (length + width);
							printf("The Rectangular Perimeter is %.2f\n", rectanglePerimeter);
						}
						break;
					case 5:
						puts("===========================================================================================");
						puts("CHOOSE THE CATEGORIES");
						puts("1. Parallelogram Area");
						puts("2. Parallelogram Perimeter");
						puts("===========================================================================================");

						int parallelogram;
						scanf("%d", &parallelogram);
						
						if(parallelogram == 1)
						{
							float base, height;
							
							printf("Input Base : ");
							scanf("%f", &base);
							printf("Input Height : ");
							scanf("%f", &height);
							
							parallelogramArea = base * height;
							printf("The Parallelogram Area is %.2f\n", parallelogramArea);
						}
						else if(parallelogram == 2)
						{
							float base, sideB;
							
							printf("Input Base : ");
							scanf("%f", &base);
							printf("Input Side B : ");
							scanf("%f", &sideB);
							
							parallelogramPerimeter = 2 * (base + sideB);
							printf("The Parallelogram Perimeter is %.2f\n", parallelogramPerimeter);
						}
						break;
					case 6:
						puts("===========================================================================================");
						puts("CHOOSE THE CATEGORIES");
						puts("1. Trapezoid Area");
						puts("2. Trapezoid Perimeter");
						puts("===========================================================================================");
						
						int trapezoid;
						scanf("%d", &trapezoid);
						
						if(trapezoid == 1)
						{
							float horizontalSide1, horizontalSide2, height;
							
							printf("Input Horizontal Side 1 : ");
							scanf("%f", &horizontalSide1);
							printf("Input Horizontal Side 2 : ");
							scanf("%f", &horizontalSide2);
							printf("Input Height : ");
							scanf("%f", &height);
							
							trapezoidArea = ((horizontalSide1 + horizontalSide2) * height) / 2;
							printf("The Isosceles Trapezoid Area is %.2f\n", trapezoidArea);
						}
						else if(trapezoid == 2)
						{
							float sideA, sideB, isoscelesSide;
							
							printf("Input Horizontal 1 : ");
							scanf("%f", &sideA);
							printf("Input Horizontal 2 : ");
							scanf("%f", &sideB);
							printf("Input Isosceles Side : ");
							scanf("%f", &isoscelesSide);
							
							trapezoidPerimeter = sideA + sideB + (2 * isoscelesSide);
							printf("The Isosceles Trapezoid Perimeter is %.2f\n", trapezoidPerimeter);
						}
						break;
					case 7:
						puts("===========================================================================================");
						puts("CHOOSE THE CATEGORIES");
						puts("1. Rhombus Area");
						puts("2. Rhombus Perimeter");
						puts("===========================================================================================");
						
						int rhombus;
						scanf("%d", &rhombus);
						
						if(rhombus == 1)
						{
							float diagonal1, diagonal2;
							
							printf("Input Diagonal 1 : ");
							scanf("%f", &diagonal1);
							printf("Input Diagonal 2 : ");
							scanf("%f", &diagonal2);
							
							rhombusArea = (diagonal1 * diagonal2) / 2;
							printf("The Rhombus Area is %.2f\n", rhombusArea);
						}
						else if(rhombus == 2)
						{
							float side;
							
							printf("Input side : ");
							scanf("%f", &side);
							
							rhombusPerimeter = 4 * side;
							printf("The Rhombuz Perimeter is %.2f\n", rhombusPerimeter);
						}
						break;
					case 8:
						puts("===========================================================================================");
						puts("CHOOSE THE CATEGORIES");
						puts("1. Kite Area");
						puts("2. Kite Perimeter");
						puts("===========================================================================================");
						
						int kite;
						scanf("%d", &kite);
						
						if(kite == 1)
						{
							float diagonal1, diagonal2;
							
							printf("Input Diagonal 1 : ");
							scanf("%f", &diagonal1);
							printf("Input Diagonal 2 : ");
							scanf("%f", &diagonal2);
							
							kiteArea = (diagonal1 * diagonal2) / 2;
							printf("The Kite Area is %.2f\n", kiteArea);
						}
						else if(kite == 2)
						{
							float side1, side2;
							
							printf("Input side 1 : ");
							scanf("%f", &side1);
							printf("Input side 2 : ");
							scanf("%f", &side2);
							
							kitePerimeter = 2 * (side1 + side2);
							printf("The Kite Perimeter is %.2f\n", kitePerimeter);
						}
						break;	
					default:
						puts("The Calculator is not Responding!'");		
				}
			}
		}
		
		else if(calculatorType == 3)
		{
			int tcNumber;
			int surfaceArea;
					
			puts("===========================================================================================");
			puts("How Many Operations You Want to Calculate: ");
			puts("===========================================================================================");
			
			scanf("%d", &tcNumber);
						
			for(int i = 1; i <= tcNumber; i++)
			{		 
				puts("===========================================================================================");
				puts("CHOOSE THE 3D SURFACE AREA (1/2/3/4/5)");
				puts("1. Cube");
				puts("2. Cuboids");
				puts("3. Cylinder");
				puts("4. Sphere");
				puts("5. Cone");
				puts("6. Triangle Prism");
				puts("7. Square Pyramid");
				puts("===========================================================================================");
				
				scanf("%d", &surfaceArea);
						
				float cubeArea;
				float cuboidsArea;
				float cylinderArea;
				float sphereArea;
				float coneArea;
				float prismArea;
				float pyramidArea;
				float r;
						
				switch(surfaceArea)
				{
					case 1:
						float side;
							
						printf("Input Side : ");
						scanf("%f", &side);
							
						cubeArea = 6 * side * side;
						printf("The Cube Area is %.2f\n", cubeArea);
						break;
					case 2:
						float length, width, height;
								
						printf("Input Length : ");
						scanf("%f", &length);
						printf("Input Width : ");
						scanf("%f", &width);
						printf("Input Height : ");
						scanf("%f", &height);
							
						cuboidsArea = 2 * ((length*width) + (length*height) + (width*height));
						printf("The Cubois Area is %.2f\n", cuboidsArea);
						break;
					case 3:
						float t;
							
						printf("Input r : ");
						scanf("%f", &r);
						printf("Input t :");
						scanf("%f", &t);
						
						cylinderArea = (2 * phi * r * (r + t));
						printf("The Cylinder Area is : %.2f\n", cylinderArea);
						break;
					case 4:	
						printf("Input r : ");
						scanf("%f", &r);
						
						sphereArea = (4 * phi * r * r);
						printf("The Sphere Area is : %.2f\n", sphereArea);
						break;
					case 5:	
						float s;
						
						printf("Input r : ");
						scanf("%f", &r);
						printf("Input s : ");
						scanf("%f", &s);
						
						coneArea = (phi * r * r) + (phi * r * s);
						printf("The Cone Area is : %.2f\n", coneArea);
						break;
					case 6:
						float prismArea;
						float triangleBase;
						float triangleHeight;
						float sideC;
						float prismHeight;
							
						printf("Input Triangle Side a (Base) :");
						scanf("%f", &triangleBase);
						printf("Input Triangle Side b (Height) :");
						scanf("%f", &triangleHeight);
						printf("Input Side c : ");
						scanf("%f", &sideC);
						printf("Input Prism Height : ");
						scanf("%f",&prismHeight);
						
						prismArea = (triangleBase * triangleHeight) + ((triangleBase + triangleHeight + sideC) * prismHeight);
						printf("The Prism Area is %.2f\n", prismArea);
						break;
					case 7:
						float triangBase;
						float triangHeight;
						float sideBase;
						
						printf("Input Triangle Base :");
						scanf("%f", &triangBase);
						printf("Input Triangle Height :");
						scanf("%f", &triangHeight);
						printf("Input Side Base : ");
						scanf("%f", &sideBase);
						
						pyramidArea = pow(sideBase, 2) + (4 * (triangBase * triangHeight) / 2);
						printf("The Square Pyramid Area is %.2f\n", pyramidArea);
						break;
					default:
						puts("The Calculator is not Responding!");
				}
			}
		}
		
		else if(calculatorType == 4)
		{
			int calculationType;
			float number;
					
			puts("===========================================================================================");
			puts("How Many Operations You Want to Calculate: ");
			puts("===========================================================================================");
			
			scanf("%d", &tcNumber);
						
			for(int i = 1; i <= tcNumber; i++)
			{		
				puts("===========================================================================================");
				puts("CHOOSE THE CALCULATION TYPE");
				puts("1. cosinus");
				puts("2. sinus");
				puts("3. tangen");;
				puts("4. Square Root");
				puts("5. Cubic Root");
				puts("===========================================================================================");
				
				scanf("%d", &calculationType);
				
				switch(calculationType){
					case 1:
						printf("Input Number : ");
						scanf("%f", &number);
						printf("The cosinus Value is %.2f\n", cosinus(number));
						break;
					case 2:
						printf("Input Number : ");
						scanf("%f", &number);
						printf("The sinus Value is %.2f\n", sinus(number));
						break;
					case 3:
						printf("Input Number : ");
						scanf("%f", &number);
						printf("The tangen Value is %.2f\n", tangen(number));
						break;
					case 4:
						printf("Input Number : ");
						scanf("%f", &number);
						printf("The Square Root Value is %.2f\n", squareRoot(number));
						break;
					case 5:
						printf("Input Number : ");
						scanf("%f", &number);
						printf("The Cubic Root Value is %.2f\n", cubicRoot(number));
						break;
					default:
						puts("The Calculator is not Responding!");
				}
			}
		}  
		
		puts("===========================================================================================");
		puts("Do you want to use the calculator again? (Yes/No)");
		puts("===========================================================================================");
		scanf("%s", statement);
		getchar();	
		
	}
	
	while(strcmpi(statement, "Yes") == 0);
	
    if((font = fopen("fontThankyou.txt","r")) == NULL)
	{
        printf("Error: File tidak ada!");
    }

    while(fgets(UI, sizeof(UI), font))
	{
        printf("%s", UI);
    }
    
    fclose(font);
		
	return 0;
}


