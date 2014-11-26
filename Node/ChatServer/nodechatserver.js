var net = require('net');

var connections = [];

var server = net.createServer(function (connection) {
	
	connection.write('Welcome!\r\n');
	connections.push(connection);
  
	for(var i in connections) {		
		connections[i].write('*** There\'s ' + connections.length + ' participants in the room ***\r\n');
	}
		
	connection.on('data', function(data) {	
	
		for(var i in connections) {
			if(i != connections.indexOf(connection))
				connections[i].write(data);
		}
    });

	connection.on('end', function() {	
		var x = connections.indexOf(connection);
		connections.splice(x,1)
			
	for(var i in connections)
		connections[i].write('*** There\'s ' + connections.length + ' participants in the room ***\r\n');
	});    
	
}).listen(8888);
