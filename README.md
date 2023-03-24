# Frirst


#End to End Deployment 

Create you model and dump it using pickle . 
Create your git hub repo and clone it on your local .
Create new environment and install all the dependencies and also create requirement.txt and add the dependencies in reqirement which you are adding .
Now create routes using flask and render html pages .
Now to deploy on heroku create a procfile and setup.h file   
  * A Procfile is a mechanism for declaring what commands are run by your application's containers on the Deis platform.
  * web : gunicorn app:app -- gunicorn is used create a WSGI 
  * setup.h 
Now create a heroku id and create heroku ....attach to github 
You can also deploy on heroku using dockers and github action cscid pipeline . (Dockerize whole application)
 * Create docker file....it create a docker image and that image can be run wihtin the container
 * .github/workflow then in that create a main.yml file and in that add deployment code of heroku
 
