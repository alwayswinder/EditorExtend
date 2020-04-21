// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCustomAsset.h"

UMyCustomAsset::UMyCustomAsset()
{

	CreateBox();
}

void UMyCustomAsset::CreateBox()
{
	Vertices.Add(FVector(0.f, 0.f, 0.f));
	Vertices.Add(FVector(0.f, 100.f, 0.f));
	Vertices.Add(FVector(100.f, 100.f, 0.f));
	Vertices.Add(FVector(100.f, 0.f, 0.f));
	Vertices.Add(FVector(0.f, 0.f, 100.f));
	Vertices.Add(FVector(0.f, 100.f, 100.f));
	Vertices.Add(FVector(100.f, 100.f, 100.f));
	Vertices.Add(FVector(100.f, 0.f, 100.f));

	Triangles.Add(0); Triangles.Add(1); Triangles.Add(5);
	Triangles.Add(0); Triangles.Add(5); Triangles.Add(4);

	Triangles.Add(1); Triangles.Add(2); Triangles.Add(6);
	Triangles.Add(1); Triangles.Add(6); Triangles.Add(5);

	Triangles.Add(2); Triangles.Add(3); Triangles.Add(7);
	Triangles.Add(2); Triangles.Add(7); Triangles.Add(6);

	Triangles.Add(3); Triangles.Add(0); Triangles.Add(4);
	Triangles.Add(3); Triangles.Add(4); Triangles.Add(7);

	Triangles.Add(5); Triangles.Add(6); Triangles.Add(7);
	Triangles.Add(5); Triangles.Add(7); Triangles.Add(4);

	Triangles.Add(1); Triangles.Add(3); Triangles.Add(2);
	Triangles.Add(1); Triangles.Add(0); Triangles.Add(3);


}
