<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Advanced Weather Dashboard</title>
    <style>
        :root {
            --glass-bg: rgba(255, 255, 255, 0.15);
            --glass-border: rgba(255, 255, 255, 0.4);
            --text-main: #ffffff;
            --accent-yellow: #fbc531;
        }

        body {
            font-family: 'Segoe UI', Roboto, Helvetica, Arial, sans-serif;
            background: linear-gradient(135deg, #43cea2 0%, #185a9d 30%, #ff7e5f 100%);
            background-attachment: fixed;
            colaor: var(--text-main);
            margin: 0;
            padding: 40px 20px;
            display: flex;
            flex-direction: column;
            align-items: center;
        }

        .header {
            text-align: center;
            margin-bottom: 50px;
        }

        .header h1 {
            font-size: 3rem;
            margin: 0;
            font-weight: 800;
            letter-spacing: -1px;
            text-shadow: 0 4px 10px rgba(0,0,0,0.2);
        }

        .dashboard-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(350px, 1fr));
            gap: 30px;
            width: 100%;
            max-width: 1200px;
        }

        .weather-card {
            background: var(--glass-bg);
            backdrop-filter: blur(15px);
            -webkit-backdrop-filter: blur(15px);
            border: 1px solid var(--glass-border);
            border-radius: 30px;
            overflow: hidden;
            box-shadow: 0 20px 40px rgba(0,0,0,0.15);
            transition: all 0.4s cubic-bezier(0.175, 0.885, 0.32, 1.275);
        }

        .weather-card:hover {
            transform: translateY(-10px);
            box-shadow: 0 30px 60px rgba(0,0,0,0.25);
            background: rgba(255, 255, 255, 0.2);
        }

        .city-image {
            width: 100%;
            height: 200px;
            object-fit: cover;
            border-bottom: 1px solid var(--glass-border);
        }

        .card-content {
            padding: 30px;
        }

        .city-header {
            display: flex;
            justify-content: space-between;
            align-items: center;
        }

        .city-header h2 {
            margin: 0;
            font-size: 1.8rem;
            font-weight: 700;
        }

        .temp-display {
            font-size: 4rem;
            font-weight: 200;
            margin: 15px 0;
            color: var(--accent-yellow);
        }

        .weather-details {
            display: grid;
            grid-template-columns: 1fr 1fr;
            gap: 20px;
            margin-top: 25px;
            padding-top: 20px;
            border-top: 1px solid rgba(255,255,255,0.2);
        }

        .detail-box {
            background: rgba(0,0,0,0.1);
            padding: 12px;
            border-radius: 15px;
        }

        .label {
            display: block;
            font-size: 0.7rem;
            text-transform: uppercase;
            opacity: 0.8;
            margin-bottom: 5px;
            letter-spacing: 1px;
        }

        .value {
            font-size: 1.1rem;
            font-weight: 600;
        }

        .status-tag {
            background: #fff;
            color: #333;
            padding: 5px 15px;
            border-radius: 20px;
            font-size: 0.8rem;
            font-weight: bold;
        }
    </style>
</head>
<body>

    <div class="header">
        <h1>Global Weather Center</h1>
        <p>Live Atmospheric Analysis & Satellite Imagery</p>
    </div>

    <div class="dashboard-grid">
        
        <!-- Ladakh -->
        <div class="weather-card">
            <img src="file:///C:/Users/sit.lab5/Downloads/ladhak.avif" class="city-image">
            <div class="card-content">
                <div class="city-header">
                    <h2>Ladakh</h2>
                    <span class="status-tag">WINTERY</span>
                </div>
                <div class="temp-display">-4°C</div>
            </div>
        </div>

        <!-- Hyderabad -->
        <div class="weather-card">
            <img src="file:///C:/Users/sit.lab5/Downloads/HYDERABAD.jpg.jpg" class="city-image">
            <div class="card-content">
                <div class="city-header">
                    <h2>Hyderabad</h2>
                    <span class="status-tag">SUNNY</span>
                </div>
                <div class="temp-display">31°C</div>
            </div>
        </div>

        <!-- Ratnagiri -->
        <div class="weather-card">
            <img src="file:///C:/Users/sit.lab5/Downloads/RATNAGIRI.webp" class="city-image">
            <div class="card-content">
                <div class="city-header">
                    <h2>Ratnagiri</h2>
                    <span class="status-tag">COASTAL</span>
                </div>
                <div class="temp-display">29°C</div>
            </div>
        </div>

    </div>

</body>
</html>
