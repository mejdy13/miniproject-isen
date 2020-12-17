# miniproject-isen

Veillez à ce que tous les include patch soient bien à jour pour la libraire stb dans drawing.h

Veillez à joindre tous les fichiers .c lors de la commande d'éxecution
Mon task pour vs code : 
{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "cppbuild",
			"label": "C/C++: g++.exe build active file",
			"command": "C:\\MinGW\\bin\\g++.exe",
			"args": [
				"-g",
				"${file}",
				"-o",
				"${fileDirname}\\${fileBasenameNoExtension}.exe",
				"C:\\Users\\gaut9\\Desktop\\miniproject-isen-master2\\Drawing.cpp",
				"C:\\Users\\gaut9\\Desktop\\miniproject-isen-master2\\Figure.cpp",
				"C:\\Users\\gaut9\\Desktop\\miniproject-isen-master2\\Carre.cpp",
				"C:\\Users\\gaut9\\Desktop\\miniproject-isen-master2\\Croix.cpp",
				"C:\\Users\\gaut9\\Desktop\\miniproject-isen-master2\\Rectangle.cpp",
				"C:\\Users\\gaut9\\Desktop\\miniproject-isen-master2\\Segment.cpp",
				"C:\\Users\\gaut9\\Desktop\\miniproject-isen-master2\\Menu.cpp"
			],
			"options": {
				"cwd": "C:\\MinGW\\bin"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": {
				"kind": "build",
				"isDefault": true
			},
			"detail": "compiler: C:\\MinGW\\bin\\g++.exe"
		}
	]
}